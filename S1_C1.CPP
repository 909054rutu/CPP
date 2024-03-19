#include<iostream.h>
#include<conio.h>
inline int max(int a,int b,int c)
{
 if(a>b && a>c)
 return a;
 else if(b>a&&b>c)
 return b;
 else
 return c;
}
inline int min(int a,int b,int c)
{
 if(a<b && a<c)
 return a;
 else if(b<a&&b<c)
 return b;
 else
 return c;
}
int main()
{
int a,b,c;
clrscr();
cout<<"enter three number";
cin>>a>>b>>c;
cout<< "greater no="<<max(a,b,c)<<endl;
cout<< "minimum no="<<min(a,b,c);
getch();
return 0;
}
