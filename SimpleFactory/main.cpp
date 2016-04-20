#include <iostream>
#include "Fruit.h"
#include"FruitFactory.h"

using namespace std;

int main() {
    string name;
    cin >> name;
    Fruit *f = FruitFactory::createFurit(name);
    f->whatIsYourName();
    delete f;
    return 0;
}

