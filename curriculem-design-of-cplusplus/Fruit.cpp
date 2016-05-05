//
// Created by Wen Chao on 5/5/16.
//

#include "Fruit.h"
#include<iostream>

using namespace std;

Fruit::~Fruit() { }

void Fruit::setName(string name) {
    this->name = name;
}

void Fruit::setPlace(string place) {
    this->place = place;
}

void Fruit::show() {
    cout << "品種：" << name << endl;
    cout << "產地：" << place << endl;
}