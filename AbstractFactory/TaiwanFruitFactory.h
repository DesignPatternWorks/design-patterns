//
// Created by Kabibi on 4/22/16.
//

#ifndef ABSTRACTFACTORY_TAIWANFRUITFACTORY_H
#define ABSTRACTFACTORY_TAIWANFRUITFACTORY_H


#include "Apple.h"
#include "Banana.h"
#include "AbstractFruitFactory.h"

class TaiwanFruitFactory:public AbstractFruitFactory {
public:
    TaiwanFruitFactory();
    virtual ~TaiwanFruitFactory();//
    virtual Apple* createApple();//
    virtual Banana* createBanana();//
};


#endif //ABSTRACTFACTORY_TAIWANFRUITFACTORY_H
