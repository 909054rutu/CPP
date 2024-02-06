#include<iostream>
using namespace std;

void area(float r,float l)
{
               float a=3.14*r*(r+1);
               cout<<"Area of con="<<a<<endl;
}

void area(float r)
{
               float a=4*3.14*r*r;
               cout<<"Area of sphere="<<a<<endl;
}
void area(double r)
{
               double a=3.14*r*r;
               cout<<"Area of circle="<<a<<endl;
}
int main()
{
               area(2.4f,1.5f);
               area(2.8f);
               area(9.6f);
}