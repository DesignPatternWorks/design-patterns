//
// Created by Kabibi on 4/22/16.
//

#ifndef ABSTRACTFACTORY_TAIWANAPPLE_H
#define ABSTRACTFACTORY_TAIWANAPPLE_H

#include "Apple.h"

class TaiwanApple : public Apple {
public:
    TaiwanApple(string name="台湾默认苹果",double price=10,string place = "台北");

    ~TaiwanApple();
};


#endif //ABSTRACTFACTORY_TAIWANAPPLE_H
