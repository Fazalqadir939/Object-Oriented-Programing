#ifndef DERIVED1_H
#define DERIVED1_H
#include "base_class.h"

class Derived1:public Base{
    protected:
    int derived1_member{};
    public:
    Derived1(int,int);
    ~Derived1();
};
#endif