cmake_minimum_required(VERSION 2.8.4)
project(AbstractFactory)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Apple.cpp Apple.h AbstractFruitFactory.cpp AbstractFruitFactory.h Banana.cpp Banana.h TaiwanFruitFactory.cpp TaiwanFruitFactory.h TaiwanApple.cpp TaiwanApple.h HainanApple.cpp HainanApple.h TaiwanBanana.cpp TaiwanBanana.h HainanFruitFactory.cpp HainanFruitFactory.h HainanBanana.cpp HainanBanana.h)
add_executable(AbstractFactory ${SOURCE_FILES})