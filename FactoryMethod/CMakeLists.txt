cmake_minimum_required(VERSION 2.8.4)
project(FactoryMethod)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Fruit.cpp Fruit.h AppleFactory.cpp AppleFactory.h Apple.cpp Apple.h FruitFactory.cpp FruitFactory.h)
add_executable(FactoryMethod ${SOURCE_FILES})