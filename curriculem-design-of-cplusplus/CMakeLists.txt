cmake_minimum_required(VERSION 2.8.4)
project(kechengsheji)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Apple.cpp Apple.h Fruit.cpp Fruit.h SingletonFactory.h Banana.cpp Banana.h Pear.cpp Pear.h)
add_executable(kechengsheji ${SOURCE_FILES})