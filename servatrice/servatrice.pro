######################################################################
# Automatically generated by qmake (2.01a) Fr Sep 5 18:02:29 2008
######################################################################

TEMPLATE = app
TARGET = 
DEPENDPATH += . src ../common
INCLUDEPATH += . src ../common
MOC_DIR = build
OBJECTS_DIR = build
LIBS += -lgcrypt -lprotobuf

CONFIG += qt debug
QT += network sql
QT -= gui

HEADERS += src/main.h \
	src/servatrice.h \
	src/serversocketinterface.h \
	src/server_logger.h \
	src/serversocketthread.h \
	src/passwordhasher.h \
	../common/color.h \
	../common/serializable_item.h \
	../common/decklist.h \
	../common/protocol.h \
	../common/protocol_datastructures.h \
	../common/rng_abstract.h \
	../common/rng_sfmt.h \
	../common/server.h \
	../common/server_arrow.h \
	../common/server_card.h \
	../common/server_cardzone.h \
	../common/server_room.h \
	../common/server_counter.h \
	../common/server_game.h \
	../common/server_player.h \
	../common/server_protocolhandler.h \
	../common/server_arrowtarget.h

 
SOURCES += src/main.cpp \
	src/servatrice.cpp \
	src/serversocketinterface.cpp \
	src/server_logger.cpp \
	src/serversocketthread.cpp \
	src/passwordhasher.cpp \
	../common/serializable_item.cpp \
	../common/decklist.cpp \
	../common/protocol.cpp \
	../common/protocol_datastructures.cpp \
	../common/rng_abstract.cpp \
	../common/rng_sfmt.cpp \
	../common/sfmt/SFMT.c \
	../common/server.cpp \
	../common/server_card.cpp \
	../common/server_cardzone.cpp \
	../common/server_room.cpp \
	../common/server_game.cpp \
	../common/server_player.cpp \
	../common/server_protocolhandler.cpp

include ( ../pb_headers )
include ( ../pb_sources )
