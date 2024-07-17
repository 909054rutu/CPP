#include<iostream.h>
#include<conio.h>
class person
{
public:
char name[20],add[20];
float sal,tax;
void accept()
{
cout<<"enter name add sal tax";
cin>>name>>add>>sal;
}
void cal()
{
if(sal<=20000)
tax=0;
else if(sal>20000||sal<40000)
tax=sal*5/100;
else if(sal>40000)
tax=sal*10/100;
}
void disp()
{
cout<<"name="<<name;
cout<<"add="<<add;
cout<<"sal="<<sal;
cout<<"tax="<<tax;
};
int main()
{
person ob;
ob.accept();
ob.cal();
ob.disp();
return 0;
getch();
}

