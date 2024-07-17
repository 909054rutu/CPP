#include<iostream.h>
#include<conio.h>
class date
{
public:
int dd,mm,yy;
date()
{
dd=dd;
mm=mm;
yy=yy;
}
date(int dd,int mm,int yy)
{
this->dd=dd;
this->mm=mm;
this->yy=yy;
}
void disp()
{
if(mm==1)
cout<<"\ndate="<<mm<<"-jan-"<<yy;
if(mm==2)
cout<<"\ndate="<<mm<<"-jan-"<<yy;
}
};
int main()
{
date ob;
ob.disp();
date ob1(88,2,9099);
ob1.disp();
getch();
return 0;
}

