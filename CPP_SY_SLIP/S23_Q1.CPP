#include<conio.h>
#include<iostream.h>
#include<string.h>
class Mystring
{
public:
char s1[10];
void accept()
{
cout<<"\n enter string";
cin>>s1;
}
void disp()
{
cout<<"\n string="<<s1;
}
void operator +(Mystring &ob1)
{
strcat(s1,ob1.s1);
cout<<"\n concat string="<<s1;
}
};
int main()
{
Mystring ob,ob1;
ob.accept();
ob1.accept();
ob.disp();
ob1.disp();
ob+ob1;
getch();
return 0;
}
