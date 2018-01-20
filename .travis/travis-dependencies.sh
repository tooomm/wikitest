#!/bin/bash

if [[ $TRAVIS_OS_NAME == "osx" ]] ; then
  brew install ccache   # enable caching on mac (PATH only set in travis-compile.sh) https://docs.travis-ci.com/user/caching/#ccache-cache
  brew install --force qt@5.7
  brew install protobuf
fi
if [[ $TRAVIS_OS_NAME == "linux" ]] ; then
  # common prerequisites
  sudo add-apt-repository -y ppa:smspillaz/cmake-master
  sudo apt-get update -qq
  sudo apt-get -y purge cmake
  sudo apt-get install -y \
    libprotobuf-dev protobuf-compiler \
    cmake \
    bc \
    qt5-default qttools5-dev qttools5-dev-tools \
    qtmultimedia5-dev \
    libqt5multimedia5-plugins libqt5svg5-dev libqt5sql5-mysql
	
  # prerequisites for tests under linux
  if [[ $BUILDTYPE == "Debug" ]]; then
    sudo apt-get install -y libgtest-dev

    sudo mkdir /usr/src/gtest/build
    cd /usr/src/gtest/build
    sudo cmake .. -DBUILD_SHARED_LIBS=1 -DRULE_LAUNCH_COMPILE=ccache --debug-output
    sudo make -j2
    sudo ln -s /usr/src/gtest/build/libgtest.so /usr/lib/libgtest.so
    sudo ln -s /usr/src/gtest/build/libgtest_main.so /usr/lib/libgtest_main.so
    cd -
  fi
fi
