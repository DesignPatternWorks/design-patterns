//
// Created by Kabibi on 4/21/16.
//

#ifndef FACTORYMETHOD_APPLEFACTORY_H
#define FACTORYMETHOD_APPLEFACTORY_H

#include "FruitFactory.h"

class AppleFactory : public  FruitFactory{
public:
    AppleFactory();

    ~AppleFactory();

    Fruit* fruitFactoryMethod();
};


#endif //FACTORYMETHOD_APPLEFACTORY_H
