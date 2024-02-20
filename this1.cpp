#include<iostream>
using namespace std;
class demo
{
               public:
                              int a=10;
                              void show()
                              {
                                    int a=20;
                                    cout<<"\n value="<<a;
                                    cout<<"\n value="<<this->a;         
                              }
}ob;
int main()
{
                ob.show();
}