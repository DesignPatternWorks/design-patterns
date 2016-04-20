//
// Created by Kabibi on 4/21/16.
//

#include "AppleFactory.h"
#include "Fruit.h"
#include "Apple.h"

AppleFactory::AppleFactory() { }

AppleFactory::~AppleFactory() { }

Fruit* AppleFactory::fruitFactoryMethod(){
    return new Apple();
}