#include<iostream>
using namespace std;
class shape
{
               public:
                              virtual void area()=0;
                             
};
class circle :public shape
{
               public:
               float r,a;
               void area()
               {
                              cout<<"enter radious:";
                              cin>>r;
                              a=3.14*r*r;
                              cout<<"area of circle="<<a;
               }
};
class sphere:public shape
{
               public:
               float r,a;
               void area()
               {
                              cout<<"\n enter radious:";
                              cin>>r;
                              a=4*3.14*r*r;
                              cout<<"area of sphere="<<a;
               }
};
class cylinder:public shape
{
               public:
               float r,a,h;
               void area()
               {
                              cout<<"enter radious & height:";
                              cin>>r>>h;
                              a=(2*3.14*r*h)+(2*3.14*r*r);
                              cout<<"area of rectangle="<<a;
               }
};
int main()
{
        circle ob;
        sphere ob1; 
        cylinder ob2;
        ob.area();
        ob1.area();
        ob2.area();
          
}