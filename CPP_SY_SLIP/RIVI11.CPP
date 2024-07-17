#include<conio.h>
#include<iostream.h>
class My
{
public:
int *a,n;
My();
~My();
};
My::My()
{
int sum=0;
a=new int(n);
cout<<"enter limit";
cin>>n;
cout<<"\n enter array element";
for(int i=0;i<n;i++)
{
cin>>a[i];
sum=sum+a[i];
}
cout<<"sum of array="<<sum;
}
My::~My()
{
delete a;
}
int main()
{
clrscr();
My ob;
getch();
return 0;
}