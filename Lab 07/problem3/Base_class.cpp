#include "base_class.h"
#include<iostream>
using namespace std;
Base::Base(int a):base_member(a){
    cout << "Base parameterized constructor\n";
}
Base::~Base(){
    cout << "base Destructor\n";
}