#include<iostream>
using namespace std;

void volume(float r,float l)
{
               int v=3.14*r*(r+l);
               cout<<"volume of cylinder="<<v;
}
void volume(int l,int h)
{
               int v=3.14*l*h;
               cout<<"volume of cylinder="<<v;
}
void volume(double r)
{
               int v=4*3.14*r*r;
               cout<<"volume of cylinder="<<v;
}

               int main()
               {
                 volume(8.4f,6.5f);
                 volume(8,6);
                 volume(8);
               
               }
