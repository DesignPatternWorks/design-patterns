//
// Created by vinater on 4/20/16.
//

#include <iostream>
#include "Banana.h"

using std::cout;
using std::endl;

Banana::Banana() {
    cout << "Banana instance created!" << endl;
}

Banana::~Banana() {
    cout << "Banana instance deleted!" << endl;
}

void Banana::whatIsYourName() {
    cout << "I'm banana." << endl;
}
