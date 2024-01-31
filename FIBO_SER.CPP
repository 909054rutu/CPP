#include<iostream.h>
#include<conio.h>
int main()
{
int n,i,f=0,s=1,t;
clrscr();
cout<<"enter no";
cin>>n;
cout<<f<<"\t"<<s;
for(i=1;i<n;i++)
{
t=f+s;
cout<<"\t"<<t;
f=s;
s=t;
}
getch();
}