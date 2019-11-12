# Install script for directory: /home/user/june/muduo/muduo/muduo/net

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/user/june/muduo/build/release-install-cpp11")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/user/june/muduo/build/release-cpp11/lib/libmuduo_net.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/muduo/net" TYPE FILE FILES
    "/home/user/june/muduo/muduo/muduo/net/Buffer.h"
    "/home/user/june/muduo/muduo/muduo/net/Callbacks.h"
    "/home/user/june/muduo/muduo/muduo/net/Channel.h"
    "/home/user/june/muduo/muduo/muduo/net/Endian.h"
    "/home/user/june/muduo/muduo/muduo/net/EventLoop.h"
    "/home/user/june/muduo/muduo/muduo/net/EventLoopThread.h"
    "/home/user/june/muduo/muduo/muduo/net/EventLoopThreadPool.h"
    "/home/user/june/muduo/muduo/muduo/net/InetAddress.h"
    "/home/user/june/muduo/muduo/muduo/net/TcpClient.h"
    "/home/user/june/muduo/muduo/muduo/net/TcpConnection.h"
    "/home/user/june/muduo/muduo/muduo/net/TcpServer.h"
    "/home/user/june/muduo/muduo/muduo/net/TimerId.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/user/june/muduo/build/release-cpp11/muduo/net/http/cmake_install.cmake")
  include("/home/user/june/muduo/build/release-cpp11/muduo/net/inspect/cmake_install.cmake")
  include("/home/user/june/muduo/build/release-cpp11/muduo/net/tests/cmake_install.cmake")
  include("/home/user/june/muduo/build/release-cpp11/muduo/net/protobuf/cmake_install.cmake")
  include("/home/user/june/muduo/build/release-cpp11/muduo/net/protorpc/cmake_install.cmake")

endif()

