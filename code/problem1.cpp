#include<iostream>
#include"problem1.h"
using namespace std;
DArray::DArray(){
    arr=nullptr;
    Size=0;
    Capacity=0;
}
DArray& DArray::operator=(const DArray& d) {
    if (this==&d) {
        return *this;
    }
    delete[] arr;
    Size = d.Size;
    Capacity = d.Capacity;
    if (Capacity > 0) {
        arr = new int[Capacity];
        for (int i = 0; i < Size; i++) {
            arr[i] = d.arr[i];
        }
    } else {
        arr = nullptr;
    }

    return *this;
}
void DArray::push_back(int s){
    if(Capacity==0){
        Capacity=1;
        arr = new int[Capacity];
    }
    else if(Size==Capacity){
        Capacity*=2;
        int *ptr = new int[Capacity];
    for(int i=0;i<Size;i++){
        ptr[i]=arr[i];
    }
    delete[] arr;
    arr=ptr;
    }
    arr[Size]=s;
    Size++;
}
int DArray::getlen()const{
    return Size;
}
int DArray::getarr(int i)const{
    return *(arr+i);

}

DArray::~DArray(){
        delete[] arr;
}
ostream & operator<<(ostream & os,const DArray & d){
    for(int i=0;i<d.getlen();i++){
        os << d.getarr(i) << " ";
    }
    return os;
}
