#include<iostream>
#include "Derived2.h"
#include "Derived1.h"
using namespace std;
Derived2::Derived2(int a,int b,int c ):Derived1(a,b),derived2_member(c){
    cout << "Derived2 constructor\n";

}
void Derived2::print(){
    cout << derived2_member <<  derived1_member << base_member<< endl;
}

Derived2::~Derived2(){
    cout << "Derived 2 Destructor\n";
}
