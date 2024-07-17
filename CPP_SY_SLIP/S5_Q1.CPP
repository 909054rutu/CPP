#include<conio.h>
#include<iostream.h>

class point
{
 public:
  int x,y;
void setpoint(int a,int b)
{
x=a;
y=b;
}
void showpoint()
{
cout<<"("<<x<<","<<y<<")";
}
};
int main()
{
int a,b;
point p;
cout<<"enter tow point";
cin>>a>>b;
p.setpoint(a,b);
p.showpoint();
getch();
return 0;
}