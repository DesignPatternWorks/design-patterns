//
// Created by Wen Chao on 5/5/16.
//

#ifndef KECHENGSHEJI_FRUIT_H
#define KECHENGSHEJI_FRUIT_H

#include<string>
#include<iostream>

using namespace std;

class Fruit {
protected:
    string name;
    string place;
public:
    Fruit(string n = "NULL", string p = "NULL")
            : name(n), place(p) { }

    virtual ~Fruit() = 0;

    void setName(string name);

    void setPlace(string place);

    void show();
};

#endif //KECHENGSHEJI_FRUIT_H
