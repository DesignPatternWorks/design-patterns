cmake_minimum_required(VERSION 2.8.4)
project(SimpleFactory)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Fruit.cpp Fruit.h FruitFactory.cpp FruitFactory.h Apple.cpp Apple.h Pear.cpp Pear.h Banana.cpp Banana.h)
add_executable(SimpleFactory ${SOURCE_FILES})