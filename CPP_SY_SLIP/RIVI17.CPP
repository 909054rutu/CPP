#include<conio.h>
#include<iostream.h>
class MyMatrix
{
public:
int a[10][10];
void accept();
void disp();
void operator-(MyMatrix ob)
};
MyMatrix::accept()
{
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cin>>a[i][j];
}
}
}
MyMatrix::disp()
{
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cout<<a[i][j];
}
}
}
MyMatrix::operator -(MyMatrix ob)
{
int m[3][3];
for(i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
m[3][3]=a[i][j]-ob.a[i][j];
}
cout<<"\n";
}
}
cout<<"\n substraction of matrix";
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cout<<m[i][j];
}
cout<<"\n";
}
void main()
{
MyMatrix ob1,ob2;
ob1.accept();
ob2.accept();
ob1.disp();
ob2.disp();
ob1-ob2;
getch();
return 0;
}

