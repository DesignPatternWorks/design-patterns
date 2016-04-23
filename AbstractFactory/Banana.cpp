//
// Created by Kabibi on 4/22/16.
//
#include<string>
#include "Banana.h"

using std::string;


Banana::Banana(string _name, double _price, string _place)
        : name(_name), price(_price), place(_place) { }

Banana::~Banana() { }

string Banana::getName() {
    return name;
}

double Banana::getPrice() {
    return price;
}

string Banana::getPlace() {
    return place;
}