/****************************************************************************
 **
 ** Copyright (C) Qxt Foundation. Some rights reserved.
 **
 ** This file is part of the QxtCore module of the Qxt library.
 **
 ** This library is free software; you can redistribute it and/or modify it
 ** under the terms of the Common Public License, version 1.0, as published
 ** by IBM, and/or under the terms of the GNU Lesser General Public License,
 ** version 2.1, as published by the Free Software Foundation.
 **
 ** This file is provided "AS IS", without WARRANTIES OR CONDITIONS OF ANY
 ** KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY
 ** WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR
 ** FITNESS FOR A PARTICULAR PURPOSE.
 **
 ** You should have received a copy of the CPL and the LGPL along with this
 ** file. See the LICENSE file and the cpl1.0.txt/lgpl-2.1.txt files
 ** included with the source distribution for more information.
 ** If you did not receive a copy of the licenses, contact the Qxt Foundation.
 **
 ** <http://libqxt.org>  <foundation@libqxt.org>
 **
 ****************************************************************************/

#include "qxthmac.h"
#include <QtGlobal>

/*
\class QxtHmac

\inmodule QxtCore

\brief The QxtHmac class calculates keyed-Hash Message Authentication Codes

HMAC is a well-known algorithm for generating a message authentication code (MAC) that can be used to verify the
integrity and authenticity of a message.

This class requires Qt 4.3.0 or greater.

To verify a message, the sender creates a MAC using a key, which is a secret known only to the sender and recipient,
and the content of the message. This MAC is then sent along with the message. The recipient then creates another MAC
using the shared key and the content of the message. If the two codes match, the message is verified.

HMAC has been used as a password encryption scheme. The final output of the HMAC algorithm depends on the shared key
and an inner hash. This inner hash is generated from the message content and the key. To use HMAC as a password
scheme, the key should be the username; the message should be the user's password. The authenticating party (for
instance, a login server) only needs to store this inner hash generated by the innerHash() function. When requesting
authentication, the user calculates a HMAC using this key and message and sends his username and this HMAC to the
authenticator. The authenticator can then use verify() using the provided HMAC and the stored inner hash. When using
this scheme, the password is never stored or transmitted in plain text.
*/

#ifndef QXT_DOXYGEN_RUN
class QxtHmacPrivate : public QxtPrivate<QxtHmac>
{
public:
    QXT_DECLARE_PUBLIC(QxtHmac)
    QxtHmacPrivate() : ohash(0), ihash(0) {}
    ~QxtHmacPrivate()
    {
        // deleting NULL is safe, so no tests are needed here
        delete ohash;
        delete ihash;
    }
    QCryptographicHash* ohash;
    QCryptographicHash* ihash;
    QByteArray opad, ipad, result;
    QCryptographicHash::Algorithm algorithm;
};
#endif

/*!
 * Constructs a QxtHmac object using the specified algorithm.
 */
QxtHmac::QxtHmac(QCryptographicHash::Algorithm algorithm)
{
    QXT_INIT_PRIVATE(QxtHmac);
    qxt_d().ohash = new QCryptographicHash(algorithm);
    qxt_d().ihash = new QCryptographicHash(algorithm);
    qxt_d().algorithm = algorithm;
}

/*!
 * Sets the shared secret key for the message authentication code.
 *
 * Any data that had been processed using addData() will be discarded.
 */
void QxtHmac::setKey(QByteArray key)
{
    // We make the assumption that all hashes use a 512-bit block size; as of Qt 4.4.0 this is true of all supported hash functions
    QxtHmacPrivate* d = &qxt_d();
    d->opad = QByteArray(64, 0x5c);
    d->ipad = QByteArray(64, 0x36);
    if (key.size() > 64)
    {
        key = QCryptographicHash::hash(key, d->algorithm);
    }
    for (int i = key.size() - 1; i >= 0; --i)
    {
        d->opad[i] = d->opad[i] ^ key[i];
        d->ipad[i] = d->ipad[i] ^ key[i];
    }
    reset();
}

/*!
 * Resets the object.
 *
 * Any data that had been processed using addData() will be discarded.
 * The key, if set, will be preserved.
 */
void QxtHmac::reset()
{
    QxtHmacPrivate* d = &qxt_d();
    d->ihash->reset();
    d->ihash->addData(d->ipad);
}

/*!
 * Returns the inner hash of the HMAC function.
 *
 * This hash can be stored in lieu of the shared secret on the authenticating side
 * and used for verifying an HMAC code. When used in this manner, HMAC can be used
 * to provide a form of secure password authentication. See the documentation above
 * for details.
 */
QByteArray QxtHmac::innerHash() const
{
    return qxt_d().ihash->result();
}

/*!
 * Returns the authentication code for the message.
 */
QByteArray QxtHmac::result()
{
    QxtHmacPrivate* d = &qxt_d();
    Q_ASSERT(d->opad.size());
    if (d->result.size())
        return d->result;
    d->ohash->reset();
    d->ohash->addData(d->opad);
    d->ohash->addData(innerHash());
    d->result = d->ohash->result();
    return d->result;
}

/*!
 * Verifies the authentication code against a known inner hash.
 *
 * \sa innerHash()
 */
bool QxtHmac::verify(const QByteArray& otherInner)
{
    result(); // populates d->result
    QxtHmacPrivate* d = &qxt_d();
    d->ohash->reset();
    d->ohash->addData(d->opad);
    d->ohash->addData(otherInner);
    return d->result == d->ohash->result();
}

/*!
 * Adds the provided data to the message to be authenticated.
 */
void QxtHmac::addData(const char* data, int length)
{
    Q_ASSERT(qxt_d().opad.size());
    qxt_d().ihash->addData(data, length);
    qxt_d().result.clear();
}

/*!
 * Adds the provided data to the message to be authenticated.
 */
void QxtHmac::addData(const QByteArray& data)
{
    addData(data.constData(), data.size());
}

/*!
 * Returns the HMAC of the provided data using the specified key and hashing algorithm.
 */
QByteArray QxtHmac::hash(const QByteArray& key, const QByteArray& data, Algorithm algorithm)
{
    QxtHmac hmac(algorithm);
    hmac.setKey(key);
    hmac.addData(data);
    return hmac.result();
}

/*!
 * Verifies a HMAC against a known key and inner hash using the specified hashing algorithm.
 */
bool QxtHmac::verify(const QByteArray& key, const QByteArray& hmac, const QByteArray& inner, Algorithm algorithm)
{
    QxtHmac calc(algorithm);
    calc.setKey(key);

    QxtHmacPrivate* d = &calc.qxt_d();
    d->ohash->reset();
    d->ohash->addData(d->opad);
    d->ohash->addData(inner);
    return hmac == d->ohash->result();
}
