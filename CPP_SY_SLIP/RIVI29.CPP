#include<iostream.h>
#include<conio.h>
class bill
{
public:
char name[20];
int unit,mid,total;
void accept()
{
cout<<"enter name meter id uni";
cin>>name>>unit>>mid;
}

void cal()
{
if(unit==100)
total=unit*1;
else if(unit<200)
total=unit*2;
else
total=unit*5;
if(total>250)
{
total=total*15/100;
}

}
void disp()
{

cout<<name<<endl;
cout<<unit<<endl;
cout<<total<<endl;
}
};
int main()
{
bill ob;
ob.accept();
ob.cal();
ob.disp();
getch();
return 0;
}

