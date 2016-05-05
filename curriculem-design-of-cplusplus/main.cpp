#include <iostream>
#include "SingletonFactory.h"

using namespace std;

int main() {
    int number;
    SingletonFactory *s = SingletonFactory::getInstance();
    cout << "請輸入你想創建的水果:（1-蘋果，2-香蕉，3-梨子）" << endl;
    cin >> number;
    Fruit *f1 = s->createFruit(number);
    f1->show();
}
