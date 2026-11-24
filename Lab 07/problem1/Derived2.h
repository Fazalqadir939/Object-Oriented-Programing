#ifndef DERIVED2_H
#define DERIVED2_H
#include "Derived1.h"

class Derived2:public Derived1 {
    int derived2_member{};
    public:
    Derived2();
    ~Derived2();
};
#endif