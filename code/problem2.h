#ifndef PROBLEM2_H
#define PROBLEM2_H
using namespace std;
class DArray{
    int Size{};
    int Capacity{};
    int *arr{};
    void dynamicCopy(const int * )const;
    public:
    DArray &operator=(const DArray&);
    DArray &operator+=(int);
    int & operator[](int);
    int size()const;
    int capacity()const;
    DArray();
    void push_back(int);
    int getlen()const;
    int getarr(int)const;
    ~DArray();
};

ostream& operator<<(ostream & os,const DArray & d);
#endif