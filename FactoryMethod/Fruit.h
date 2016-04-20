//
// Created by Kabibi on 4/20/16.
//

#ifndef FACTORYMETHOD_FRUIT_H
#define FACTORYMETHOD_FRUIT_H


class Fruit {
public:
    Fruit();
    virtual ~Fruit() = 0;

    virtual void printName();

};


#endif //FACTORYMETHOD_FRUIT_H
