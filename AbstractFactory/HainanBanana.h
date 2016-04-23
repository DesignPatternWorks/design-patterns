//
// Created by Kabibi on 4/22/16.
//

#ifndef ABSTRACTFACTORY_HAINANBANANA_H
#define ABSTRACTFACTORY_HAINANBANANA_H

#include "Banana.h"
#include<string>

using std::string;

class HainanBanana : public Banana {
public:
    HainanBanana(string _name = "海南默认香蕉", double _price = 66, string _place = "三亚");

    ~HainanBanana();

};


#endif //ABSTRACTFACTORY_HAINANBANANA_H
