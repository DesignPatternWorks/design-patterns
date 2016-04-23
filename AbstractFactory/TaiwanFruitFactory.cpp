//
// Created by Kabibi on 4/22/16.
//

#include "TaiwanFruitFactory.h"
#include "TaiwanApple.h"
#include "TaiwanBanana.h"

TaiwanFruitFactory::TaiwanFruitFactory() { }

TaiwanFruitFactory::~TaiwanFruitFactory() { }

Apple *TaiwanFruitFactory::createApple() {
    return new TaiwanApple();
}

Banana *TaiwanFruitFactory::createBanana() {
    return new TaiwanBanana();
}
