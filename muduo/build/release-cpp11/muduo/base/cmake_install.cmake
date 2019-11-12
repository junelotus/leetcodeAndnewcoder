# Install script for directory: /home/user/june/muduo/muduo/muduo/base

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/user/june/muduo/build/release-cpp11/lib/libmuduo_base.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/muduo/base" TYPE FILE FILES
    "/home/user/june/muduo/muduo/muduo/base/Mutex.h"
    "/home/user/june/muduo/muduo/muduo/base/GzipFile.h"
    "/home/user/june/muduo/muduo/muduo/base/LogStream.h"
    "/home/user/june/muduo/muduo/muduo/base/CurrentThread.h"
    "/home/user/june/muduo/muduo/muduo/base/Types.h"
    "/home/user/june/muduo/muduo/muduo/base/LogFile.h"
    "/home/user/june/muduo/muduo/muduo/base/Thread.h"
    "/home/user/june/muduo/muduo/muduo/base/TimeZone.h"
    "/home/user/june/muduo/muduo/muduo/base/Date.h"
    "/home/user/june/muduo/muduo/muduo/base/Singleton.h"
    "/home/user/june/muduo/muduo/muduo/base/Atomic.h"
    "/home/user/june/muduo/muduo/muduo/base/BoundedBlockingQueue.h"
    "/home/user/june/muduo/muduo/muduo/base/Timestamp.h"
    "/home/user/june/muduo/muduo/muduo/base/AsyncLogging.h"
    "/home/user/june/muduo/muduo/muduo/base/Exception.h"
    "/home/user/june/muduo/muduo/muduo/base/Condition.h"
    "/home/user/june/muduo/muduo/muduo/base/noncopyable.h"
    "/home/user/june/muduo/muduo/muduo/base/CountDownLatch.h"
    "/home/user/june/muduo/muduo/muduo/base/StringPiece.h"
    "/home/user/june/muduo/muduo/muduo/base/FileUtil.h"
    "/home/user/june/muduo/muduo/muduo/base/WeakCallback.h"
    "/home/user/june/muduo/muduo/muduo/base/ThreadLocalSingleton.h"
    "/home/user/june/muduo/muduo/muduo/base/ThreadLocal.h"
    "/home/user/june/muduo/muduo/muduo/base/BlockingQueue.h"
    "/home/user/june/muduo/muduo/muduo/base/ThreadPool.h"
    "/home/user/june/muduo/muduo/muduo/base/copyable.h"
    "/home/user/june/muduo/muduo/muduo/base/ProcessInfo.h"
    "/home/user/june/muduo/muduo/muduo/base/Logging.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/user/june/muduo/build/release-cpp11/muduo/base/tests/cmake_install.cmake")

endif()

