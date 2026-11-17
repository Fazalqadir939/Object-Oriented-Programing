#ifndef PROBLEM3_H
#define PROBLEM3_H
using namespace std;
class DArray{
    int Size{};
    int Capacity{};
    int *arr{};
    //void dynamicCopy(const int * )const;
public:
    DArray &operator=(const DArray&);
    DArray &operator+=(int);
    int & operator[](int);
    bool operator==(const DArray&)const;
    int size()const;
    int capacity()const;
    DArray();
    DArray(const DArray&);
    void push_back(int);
    int getlen()const;
    int getarr(int)const;
    ~DArray();
};

ostream& operator<<(ostream & os,const DArray & d);
#endif