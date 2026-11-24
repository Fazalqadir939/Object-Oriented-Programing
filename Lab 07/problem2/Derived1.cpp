#include<iostream>
#include "Derived1.h"
#include "base_class.h"
using namespace std;
Derived1::Derived1(int a,int b):Base(a),derived1_member(b){
    cout << "Derived1 constructor\n";
}

Derived1::~Derived1(){
    cout << "Derived 1 destructor\n";
}