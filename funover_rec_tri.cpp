#include<iostream>
using namespace std;
void area(float r)
{
     float a=3.14*r*r;
     cout<<"\n Area of circle="<<a;          
}
void area(int l,int b)
{
               float a=l*b;
               cout<<"\n Area of rectangle="<<a;
               
}
void area(float b,float h)
{
               float a=0.5*b*h;
               cout<<"\n Area of triangle="<<a;
}
void area(int s)
{
               int a=s*s;
               cout<<"\n area of square="<<a;
}
int main()
{
               area(5.5f);
               area(2.3f,1.2f);
               area(1.3f,2.3f);
               area(5);
}