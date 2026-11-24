#include<iostream>
#include "Derived2.h"
#include "Derived1.h"
using namespace std;
Derived2::Derived2(int a,int b,int c ):Derived1(a,b),derived2_member(c){
    cout << "Derived2 constructor\n";

}
Derived2::Derived2(const Derived2& d):Derived1(d), derived2_member(d.derived2_member) {
}
void Derived2::print(){
    cout << derived2_member <<  deriverd1_member << base_member<< endl;
}
void Derived2::setValue(int a){
    base_member = a;

}
Derived2& Derived2::operator=(const Derived2& rhs) {
    if (this != &rhs) {
        Derived1::operator=(rhs);
        derived2_member = rhs.derived2_member;
    }
    return *this;
}
Derived2::~Derived2(){
    cout << "Derived 2 Destructor\n";
}
int Derived2::getb() const {
    return base_member;
}
int Derived2::getd1() const {
    return deriverd1_member;
}
int Derived2::getd2() const {
    return derived2_member;
}
ostream & operator<<(ostream & os, const Derived2 & d) {
    os << d.getb() << " " << d.getd1() << " " << d.getd2();
    return os;
}