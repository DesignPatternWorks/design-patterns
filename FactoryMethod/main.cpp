#include<iostream>
#include"Fruit.h"
#include "FruitFactory.h"
#include "AppleFactory.h"

using namespace std;

int main() {
    FruitFactory *ff = new AppleFactory();
    Fruit *fruit = ff->fruitFactoryMethod();
    fruit->printName();
    delete ff;
    delete fruit;
    return 0;
}