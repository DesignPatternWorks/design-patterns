//
// Created by Kabibi on 4/21/16.
//

#ifndef FACTORYMETHOD_APPLE_H
#define FACTORYMETHOD_APPLE_H

#include "Fruit.h"

class Apple : public Fruit {
public:
    Apple();

    ~Apple();

    void printName();
};

#endif //FACTORYMETHOD_APPLE_H
