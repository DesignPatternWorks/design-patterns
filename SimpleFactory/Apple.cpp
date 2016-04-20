//
// Created by Kabibi on 4/20/16.
//

#include "Apple.h"
#include<iostream>
using std::cout;
using std::endl;
Apple::Apple() {
    cout<<"Apple instance created!"<<endl;
}
Apple::~Apple() {
    cout<<"Apple instance deleted!"<<endl;
}
void Apple::whatIsYourName() {
    cout<<"I'm apple!"<<endl;
}