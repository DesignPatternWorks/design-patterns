//
// Created by Kabibi on 4/20/16.
//

#include "FruitFactory.h"
#include"Apple.h"
#include"Banana.h"
#include"Pear.h"

FruitFactory::FruitFactory() { }

FruitFactory::~FruitFactory() { }

Fruit *FruitFactory::createFurit(string name) {
    if ("苹果" == name)
        return new Apple();
    else if ("香蕉" == name)
        return new Banana();
    else if ("梨子" == name)
        return new Pear();
    else
        return NULL;
}
