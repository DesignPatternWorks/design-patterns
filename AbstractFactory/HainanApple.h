//
// Created by Kabibi on 4/22/16.
//

#ifndef ABSTRACTFACTORY_HAINANAPPLE_H
#define ABSTRACTFACTORY_HAINANAPPLE_H


#include "Apple.h"

class HainanApple : public Apple {
public:
    HainanApple(string _name="海南默认苹果",double _price = 25,string _place = "文昌");

    ~HainanApple();
};


#endif //ABSTRACTFACTORY_HAINANAPPLE_H
