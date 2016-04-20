//
// Created by Kabibi on 4/20/16.
//

#ifndef SIMPLEFACTORY_FRUITFACTORY_H
#define SIMPLEFACTORY_FRUITFACTORY_H


#include "Fruit.h"
#include<string>

using std::string;

class FruitFactory {
public:
    FruitFactory();

    ~FruitFactory();

    static Fruit *createFurit(string name);
};


#endif //SIMPLEFACTORY_FRUITFACTORY_H
