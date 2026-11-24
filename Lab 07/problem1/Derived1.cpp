#include<iostream>
#include "Derived1.h"
using namespace std;
Derived1::Derived1():Base(){
    cout << "Derived1 constructor\n";
}

Derived1::~Derived1(){
    cout << "Derived 1 destructor\n";
}