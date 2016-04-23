#include <iostream>
#include "AbstractFruitFactory.h"
#include "TaiwanFruitFactory.h"
#include "HainanFruitFactory.h"

using namespace std;

int main() {
    AbstractFruitFactory *aff1 = new TaiwanFruitFactory();
    Apple *apple1 = aff1->createApple();
    Banana *banana1 = aff1->createBanana();

    AbstractFruitFactory *aff2 = new HainanFruitFactory();
    Apple *apple2 = aff2->createApple();
    Banana *banana2 = aff2->createBanana();

    cout << "品名: " << apple1->getName() << endl;
    cout << "价格：" << apple1->getPrice() << endl;
    cout << "产地：" << apple1->getPlace() << endl;

    cout<<endl;

    cout << "品名：" << apple2->getName() << endl;
    cout << "价格：" << apple2->getPrice() << endl;
    cout << "产地：" << apple2->getPlace() << endl;

    cout<<endl;

    cout << "品名: " << banana1->getName() << endl;
    cout << "价格：" << banana1->getPrice() << endl;
    cout << "产地：" << banana1->getPlace() << endl;

    cout<<endl;

    cout << "品名: " << banana2->getName() << endl;
    cout << "价格：" << banana2->getPrice() << endl;
    cout << "产地：" << banana2->getPlace() << endl;
}

