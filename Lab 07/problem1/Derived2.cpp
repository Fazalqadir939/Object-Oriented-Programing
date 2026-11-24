#include<iostream>
#include "Derived2.h"
#include "Derived1.h"
using namespace std;
Derived2::Derived2():Derived1(){
    cout << "Derived2 constructor\n";
}

Derived2::~Derived2(){
    cout << "Derived 2 Destructor\n";
}
