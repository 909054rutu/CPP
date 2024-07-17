#include<conio.h>
#include<iostream.h>
class fraction
{
public:
int n,d;
fraction(int n,int d)
{
this->n=n;
this->d=d;
}
void add(fraction ob,fraction ob1)
{
n=ob.n+ob1.n;
d=ob.d+ob1.d;
 cout<<"addition="<<n<<""<<d;
}
};
int main()
{
fraction ob;
fraction ob1;
getch();
return 0;
}