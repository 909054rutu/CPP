#include<conio.h>
#include<iostream.h>

void area(float r,float l)
{
float a=3.14*r*(r+l);
cout<<"\n area of cone="<<a;
}
void area(float r)
{
float a=4*3.14*r*r;
cout<<"\n area of cone="<<a;
}
void area(double r)
{
float a=3.14*r*r;
cout<<"\n area of cone="<<a;
}
int main()
{
area(5.4f,6.7f);
area(3.4f);
area(6.1);
getch();
return 0;
}
