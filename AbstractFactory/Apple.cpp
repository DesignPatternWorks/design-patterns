//
// Created by Kabibi on 4/22/16.
//

#include "Apple.h"

Apple::Apple(string _name, double _price, string _place)
        : name(_name), price(_price), place(_place) { }

Apple::~Apple() { }

string Apple::getName() {
    return name;
}

double Apple::getPrice() {
    return price;
}

string Apple::getPlace() {
    return place;
}
