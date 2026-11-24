#ifndef Derived2_H
#define Derived2_H
#include "Derived1.h"
using namespace std;
class Derived2:public Derived1{
    int derived2_member{};
    public:
    Derived2(int,int,int);
    Derived2(const Derived2 &);
    Derived2 & operator=(const Derived2 &);
    void setValue(int);
    void print();
    int getb() const;
    int getd1() const;
    int getd2() const;
    ~Derived2();
};
ostream & operator<<(ostream & , const Derived2 &);
#endif