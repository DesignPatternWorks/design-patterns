//
// Created by Kabibi on 4/22/16.
//

#ifndef ABSTRACTFACTORY_HAINANFRUITFACTORY_H
#define ABSTRACTFACTORY_HAINANFRUITFACTORY_H


#include "Apple.h"
#include "AbstractFruitFactory.h"

class HainanFruitFactory : public AbstractFruitFactory {

public:
    HainanFruitFactory();

    virtual ~HainanFruitFactory();//

    virtual Apple *createApple();//

    virtual Banana *createBanana();//
};


#endif //ABSTRACTFACTORY_HAINANFRUITFACTORY_H
