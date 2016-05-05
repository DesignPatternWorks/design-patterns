//
// Created by Wen Chao on 5/5/16.
//

#ifndef KECHENGSHEJI_APPLE_H
#define KECHENGSHEJI_APPLE_H

#include "Fruit.h"

using namespace std;

class Apple : public Fruit {
public:
    Apple(string n = "默認蘋果", string p = "地球") : Fruit(n, p) {
        cout << "蘋果創建成功！" << endl;
    }

    ~Apple();
};

#endif //KECHENGSHEJI_APPLE_H
