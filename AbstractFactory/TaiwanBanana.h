//
// Created by Kabibi on 4/22/16.
//

#ifndef ABSTRACTFACTORY_TAIWANBANANA_H
#define ABSTRACTFACTORY_TAIWANBANANA_H

#include "Banana.h"
#include<string>

using std::string;

class TaiwanBanana : public Banana {
public:
    TaiwanBanana(string _name = "台湾默认香蕉", double price = 12.5, string place = "台南");

    ~TaiwanBanana();
};


#endif //ABSTRACTFACTORY_TAIWANBANANA_H
