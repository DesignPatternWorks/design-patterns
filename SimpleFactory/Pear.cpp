//
// Created by Kabibi on 4/20/16.
//

#include "Pear.h"
#include <iostream>

using std::cout;
using std::endl;

Pear::Pear() {
    cout << "Pear instance created!" << endl;
}

Pear::~Pear() {
    cout << "Pear instance deleted!" << endl;
}

void Pear::whatIsYourName() {
    cout << "I'm pear." << endl;
}
