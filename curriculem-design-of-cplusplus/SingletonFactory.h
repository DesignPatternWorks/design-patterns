//
// Created by Wen Chao on 5/5/16.
//

#ifndef KECHENGSHEJI_SINGLETONFACTORY_H
#define KECHENGSHEJI_SINGLETONFACTORY_H

#include<iostream>
#include "Fruit.h"
#include "Apple.h"
#include "Banana.h"
#include "Pear.h"

class SingletonFactory {
private:
    // 私有的构造函数
    SingletonFactory() { }

    // 私有的静态成员变量
    static SingletonFactory *instance;
public:
    // 公有的静态工厂方法
    static SingletonFactory *getInstance() {
        if (instance == NULL) {
            instance = new SingletonFactory();
        }
        return instance;
    }

    ~SingletonFactory() {
        delete instance;
    }

    Fruit *createFruit(int i) {
        if (i == 1) {
            return new Apple();
        }
        else if(i==2){
            return new Banana();
        }
        else {
            return new Pear();
        }
    }
};

SingletonFactory *SingletonFactory::instance = NULL;
#endif //KECHENGSHEJI_SINGLETONFACTORY_H

