#include<iostream.h>
#include<conio.h>
class fraction
{
public:
int n,d;
fraction(int n,int d)
{
this->n=n;
this->d=d;
}
void cal(fraction ob,fraction ob1)
{
n=ob.n+ob1.n;
d=ob.d+ob1.d;
cout<<"\n sum od numeneter="<<n<<endl;
cout<<"\n sum of denometer="<<d<<endl;
}
};
int main()
{
clrscr();
fraction ob(99,99);
fraction ob1(100,290);
ob.cal(ob,ob1);
getch();
return 0;
}

