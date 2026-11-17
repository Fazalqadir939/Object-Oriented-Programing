#include<iostream>
#include"problem3.h"
using namespace std;
DArray & DArray::operator=(const DArray& d){
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
bool DArray::operator==(const DArray& d)const {
    if (Size!=d.Size)return false;
    for (int i=0;i<Size;i++) {
        if (arr[i]!=d.arr[i])return false;
    }
    return true;
}
DArray::DArray(const DArray& d) {
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
}

DArray::DArray(){
    arr=nullptr;
    Size=0;
    Capacity=0;
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

    arr[Size-1]=s;
    Size++;
}

int DArray::getarr(int i)const{
    return *(arr+i);

}

DArray & DArray::operator+=(int n) {
    //
    return *this;
}
int DArray::size()const {
    return Size;
}
int DArray::capacity()const {
    return Capacity;
}

int & DArray::operator[](int n) {
    return arr[n];
}
DArray::~DArray(){
    delete[] arr;
}
ostream & operator<<(ostream & os,const DArray & d){
    for(int i=0;i<d.size();i++){
        os << d.getarr(i) << " ";
    }
    return os;
}
