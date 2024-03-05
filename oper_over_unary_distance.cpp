#include<iostream>
#include<math.h>
using namespace std;
class point
{
               public:
                              int x,y;
                              void accept()
                              {
                                             cout<<"enter value of x y";
                                             cin>>x>>y;
                              }
                              void disp()
                              {
                                             cout<<"\n point x="<<x<<" y="<<y;
                              }
                              friend void operator -(point &ob1,point &ob2);
               };
               void operator -(point &ob1,point &ob2)
               {
                              long int d=sqrt((ob2.x - ob1.x)*(ob2.x - ob1.x)+
                              (ob2.y - ob1.y)*(ob2.y - ob1.y));
                              cout<<"\n Distance="<<d;
               }
               int main()
               {
                              point ob1,ob2;
                              ob1.accept();
                              ob2.accept();
                              ob1.disp();
                              ob2.disp();
                              ob1-ob2;
                              
               }