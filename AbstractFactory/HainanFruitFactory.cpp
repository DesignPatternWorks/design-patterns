//
// Created by Kabibi on 4/22/16.
//

#include "HainanFruitFactory.h"
#include "HainanApple.h"
#include "HainanBanana.h"

HainanFruitFactory::HainanFruitFactory() { }

HainanFruitFactory::~HainanFruitFactory() { }

Apple *HainanFruitFactory::createApple() {
    return new HainanApple();
}

Banana *HainanFruitFactory::createBanana() {
    return new HainanBanana();
}
