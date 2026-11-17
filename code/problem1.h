#ifndef PROBLEM1_H
#define PROBLEM1_H
using namespace std;
class DArray{
    int Size{};
    int Capacity{};
    int *arr{};
    void dynamicCopy(const int * )const;
    public:
    DArray &operator=(const DArray&);
    DArray();
    void push_back(int);
    int getlen()const;
    int getarr(int)const;
    ~DArray();
};

ostream& operator<<(ostream & os,const DArray & d);
#endif