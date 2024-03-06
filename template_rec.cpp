#include<iostream>
using namespace std;

template<class T1>
 void area(T1 r,T1 l,T1 b)
 {
                T1 a=3.14*r*r;
                cout<<"\n Area of circle="<<a;
                T1 rect=l*b;
                cout<<"\n Area of rectangle="<<rect;
 }
 int main()
 {
                area(5,55,11);
 }