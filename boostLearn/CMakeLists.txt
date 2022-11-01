cmake_minimum_required(VERSION 3.23)
project(boostLearn)

set(CMAKE_CXX_STANDARD 14)

#set(Boost_COMPILER mgw92) # 如果boost生成的库不匹配需要加上
#set(Boost_DETAILED_FAILURE_MSG ON)
#set(Boost_DEBUG on)
set(BOOST_ROOT "D:/Library/MinGW/include/")
set(BOOST_INCLUDEDIR "D:/Library/MinGW/include")
set(BOOST_LIBRARIES "D:/Library/MinGW/lib")

find_package(Boost COMPONENTS REQUIRED thread)

add_executable(boostLearn main.cpp)
include_directories(${BOOST_ROOT})
target_link_libraries(boostLearn ${Boost_LIBRARIES})
