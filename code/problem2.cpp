#include<iostream>
#include"problem2.h"
using namespace std;
DArray & DArray::operator=(const DArray& d){

}
DArray::DArray(){
    arr=nullptr;
    Size=0;
    Capacity=0;
}
void DArray::push_back(int s){
    if(Capacity==0){
        Capacity=1;
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
    dynamicCopy(arr);
    arr[Size-1]=s;
    Size++;
}
void DArray::dynamicCopy(const int * ar )const{

}
int DArray::getlen()const{
    return Size;
}
int DArray::getarr(int i)const{

    return *(arr+i);

}

DArray & DArray::operator+=(int n) {
    
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
    for(int i=0;i<d.getlen();i++){
        os << d.getarr(i) << " ";
    }
    return os;
}
