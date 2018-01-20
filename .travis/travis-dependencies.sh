#!/bin/bash

if [[ $TRAVIS_OS_NAME == "osx" ]] ; then
  brew install ccache   # enable caching on mac (PATH only set in travis-compile.sh) https://docs.travis-ci.com/user/caching/#ccache-cache
  brew install --force qt@5.7
  brew install protobuf
fi
