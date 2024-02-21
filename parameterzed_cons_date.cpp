#include<iostream>
using namespace std;
class date
{
public:
int dd,mm,yy;
date()
{
dd=2;
mm=3;
yy=2022;
}
void disp()
{
cout<<"date="<<dd<<"-"<<mm<<"-"<<yy;
}
date(int dd,int mm,int yy)
{
this->dd=dd;
this->mm=mm;
this->yy=yy;
}
void display()
{
if(mm==1)
cout<<"\n date="<<dd<<"\ jan "<<yy;
if(mm==2)
cout<<"\n date="<<dd<<"\ feb "<<yy;
}
};
int main() 
{

date ob;
ob.disp();
date ob1(22,2,2001);
ob1.display();

}

