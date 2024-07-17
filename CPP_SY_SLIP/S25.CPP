#include<conio.h>
#include<iostream.h>
inline int mean(int a1,int a2,int a3)
{
if(a1<a2&&a1<a3)
return a1;
else if(a2<a1&&a2<a3)
return a2;
else
return a3;
}
inline int mode(int a1,int a2,int a3)
{
return (a1+a2+a3)/3;
}
inline int median(int a2)
{
return a2;
}
int main()
{
clrscr();
int a1,a2,a3;
cout<<"\n enter three no";
cin>>a1>>a2>>a3;
cout<<"\n mean="<<mean(a1,a2,a3);
cout<<"\n mean="<<mode(a1,a2,a3);
cout<<"\n mean="<<median(a2);
getch();
return 0;
}
