#include<iostream>
using namespace std;

class point
{
               public:
                              int x,y;
               void setpoint(int a,int b)
               {
                              x=a;
                              y=b;
               }
               void dis()
               {
                              cout<<"show point"<<"("<<x<<","<<y<<")";
                             
               }
}ob;
int main()
{

               ob.setpoint(3,5);
               ob.dis();
               
}