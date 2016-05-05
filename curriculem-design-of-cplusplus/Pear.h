//
// Created by Wen Chao on 5/5/16.
//

#ifndef KECHENGSHEJI_PEAR_H
#define KECHENGSHEJI_PEAR_H

#include "Fruit.h"

class Pear : public Fruit {
public:
    Pear(string n = "默認梨子", string p = "地球") : Fruit(n, p) {
        cout << "梨子創建成功！" << endl;
    }

    ~Pear();
};

#endif //KECHENGSHEJI_PEAR_H
