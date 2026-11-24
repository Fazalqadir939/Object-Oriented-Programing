#ifndef DERIVED2_H
#define DERIVED2_H
#include "Derived1.h"

class Derived2:public Derived1 {
    int derived2_member{};
    public:
    Derived2(int,int,int);
    void print();
    ~Derived2();
};
#endif