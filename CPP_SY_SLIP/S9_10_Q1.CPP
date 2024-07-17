#include<conio.h>
#include<iostream.h>
class person
{
public:
char name[20];
int sal,tax;
void accept()
{
cout<<"enter name sal tax";
cin>>name>>sal>>tax;
}
void disp()
{
cout<<name;
cout<<sal;
cout<<tax;
}
int main()
{
int n,i;
cout<<"enter limit";
cin>>n;
person *a=new account;
for(i=0;i<n;i++)
{
a[i].account();
}
cout<<"disp";
for(i=0;i<n;i++)
{
a[i].disp();
}
getch();
return 0;
}