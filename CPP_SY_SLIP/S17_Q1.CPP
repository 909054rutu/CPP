
#include<conio.h>
#include<iostream.h>
class MyMatrix
{
public:
int a[10][10],i,j;
void accept()
{
for(int i=0;i<2;i++)
for(int j=0;j<2;j++)
cin>>a[i][j];
}
void disp()
{
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout>>a[i][j]<<"\t";
}
}
void operator -(MyMatrix &ob1)
{
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
a[i][j]=a[i][j]-ob1.a[i][j];
}
cout<<"endl";
}
}
}
};
int main()
{
MyMatrix ob,ob1;
ob.accept();
ob1.accept();
ob.disp();
ob1.disp();
ob-ob1;
getch();
return 0;
}


