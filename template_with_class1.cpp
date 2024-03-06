#include<iostream>
using namespace std;

template<class T1,class T2>
 class Demo
 {
                public:
                               T1 a;
                                T2 b;
                               Demo(T1 a,T2 b)
                                {
                                               this->a=a;
                                               this->b=b;
                                }
                                void add()
                                {
                                               cout<<"\n addition="<<a+b;
                                }
 };
 int main()
 {
                Demo<int,float>ob(20,4.11);
                ob.add();
                Demo<float,int>ob1(10.50f,9);
                 ob1.add();
 }