//
// Created by Kabibi on 4/20/16.
//

#ifndef FACTORYMETHOD_FRUITFACTORY_H
#define FACTORYMETHOD_FRUITFACTORY_H


#include "Fruit.h"

class FruitFactory {
public:
    FruitFactory();

    virtual ~FruitFactory() = 0;

    virtual Fruit *fruitFactoryMethod();
};


#endif //FACTORYMETHOD_FRUITFACTORY_H
