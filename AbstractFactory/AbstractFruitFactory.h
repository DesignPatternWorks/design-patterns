//
// Created by Kabibi on 4/22/16.
//

#ifndef ABSTRACTFACTORY_ABSTRACTFRUITFACTORY_H
#define ABSTRACTFACTORY_ABSTRACTFRUITFACTORY_H


#include "Apple.h"
#include "Banana.h"

class AbstractFruitFactory {
public:
    AbstractFruitFactory();

    virtual ~AbstractFruitFactory();

    virtual Apple *createApple() = 0;

    virtual Banana *createBanana() = 0;
};


#endif //ABSTRACTFACTORY_ABSTRACTFRUITFACTORY_H
