//
// Created by Kabibi on 4/22/16.
//

#ifndef ABSTRACTFACTORY_BANANA_H
#define ABSTRACTFACTORY_BANANA_H

#include<string>

using std::string;

class Banana {
protected:
    std::string name;
    double price;
    std::string place;
public:
    Banana(string _name="NULL",double _price=0,string _place="NULL");

    virtual ~Banana() = 0;

    virtual string getName();

    virtual double getPrice();

    virtual string getPlace();
};


#endif //ABSTRACTFACTORY_BANANA_H
