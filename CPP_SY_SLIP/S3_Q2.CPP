#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class emp
{
public:
int code;
char name[20];
int sal;
void accept()
{
cout<<"enter code name sal";
cin>>code>>name;
}
void disp()
{
cout<<"code="<<code<<endl;
cout<<"name="<<name<<endl;
}
};
class fulltime:public emp
{
public:
int daily_wages,no_of_day,sal;
void full_accept()
{
cout<<"daily wages no_of_day";
cin>>daily_wages>>no_of_day;
}
void calfull()
{
sal=daily_wages*no_of_day;
cout<<"sal="<<sal;
}
void disp_full()
{
cout<<"code="<<code<<endl;
cout<<"name="<<name<<endl;
cout<<"daily wages="<<daily_wages;
cout<<"no_of_days="<<no_of_day;
}
};

class parttime:public emp
{
public:
int nowh,hours,sal;
void part_accept()
{
cout<<"daily wages no_of_day";
cin>>nowh>>hours;
}
void calpart()
{
sal=nowh*hours;
cout<<"sal="<<sal;
}
void disp()
{
cout<<"code="<<code<<endl;
cout<<"name="<<name<<endl;
cout<<"daily wages="<<nowh;
cout<<"no_of_days="<<hours;
}
};

int main()
{
emp ob[5];
fulltime ob1[5];
parttime ob2[5];
int i,n,max,index,ch;
cout<<"\n enter limit";
cin>>n;
do
{
cout<<"\n enter choice";
cout<<"\n 1-accept emp cal sal \n 2 disp n emp\n 3 max sal";
cin>>ch;
switch(ch)
{
case 1:
for(int i=0;i<n;i++)
{
ob1[i].full_accept();
ob1[i].disp_full();
ob1[i].calfull();
}
break;
case 2:
for(i=0;i<n;i++)
{
ob[i].disp();
}
break;
case 3:
max=ob1[0].sal;
index=0;
for(i=0;i<n;i++)
{
if(ob1[i].sal>max)
{
max=ob1[i].sal;
index=i;
}
ob1[index].disp_full();
}
}
}while(ch!=4);
getch();
return 0;
}



