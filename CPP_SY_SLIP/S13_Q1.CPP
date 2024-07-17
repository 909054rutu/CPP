#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class demo{
public:
int id,qut,price;
char name[20];
void accept()
{
cout<<"\n id name qut price name";
cin>>id>>qut>>price>>name;
static int c1;
c1++;
cnt=c1;
}
void disp()
{
cout<<id;
cout<<qut;
cout<<price;
cout<<name;
cout<<cnt;
};
int main()
{
demo ob;
ob.accept();
ob.disp();
return 0;
getch();
}