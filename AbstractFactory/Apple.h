//
// Created by Kabibi on 4/22/16.
//

#ifndef ABSTRACTFACTORY_APPLE_H
#define ABSTRACTFACTORY_APPLE_H

#include<string>

using std::string;

class Apple {
protected:
    string name;
    double price;
    string place;
public:
    Apple(string _name="NULL",double _price=0,string _place="NULL");

    virtual ~Apple() = 0;

    virtual string getName();

    virtual double getPrice();

    virtual string getPlace();
};


#endif //ABSTRACTFACTORY_APPLE_H
