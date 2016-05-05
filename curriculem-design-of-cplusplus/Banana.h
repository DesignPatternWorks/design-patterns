//
// Created by Wen Chao on 5/5/16.
//

#ifndef KECHENGSHEJI_BANANA_H
#define KECHENGSHEJI_BANANA_H

#include<string>
#include "Fruit.h"

using std::string;

class Banana : public Fruit {
public:
    Banana(string n = "默認香蕉", string p = "地球") : Fruit(n, p) {
        cout << "香蕉創建成功！" << endl;
    }

    ~Banana();
};


#endif //KECHENGSHEJI_BANANA_H
