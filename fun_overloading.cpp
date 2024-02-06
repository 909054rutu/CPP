#include<iostream>
using namespace std;
class over{
               public:
                              void add(int a,int b)
                              {
                                             int c=a+b;
                                             cout<<"addition="<<c<<endl;
                              }
                              void add(int a,int b,int c)
                              {
                                             int z=a+b+c;
                                             cout<<"add="<<z<<endl;
                              }
                              void add(float a,float b)
                              {
                                             float c=a+b;
                                             cout<<"add="<<c;
                              }
               };
                              int main()
                              {
                                             over ob;
                                             ob.add(20,22);
                                             ob.add(200,100);
                                             ob.add(80,90,77);
                                             ob.add(80.99f,90.9f);
                              }
