#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
#include<fstream.h>
#include<ctype.h>
class movie
{
public:
char m_name[20];
int r_year;
char d_name[20];
ofstream f1;
ifstream f2;
void accept(int n)
{
f1.open("mvi.txt",ios::out);
for(int i=0;i<n;i++)
{
cout<<"enter mname year dname bud";
cin>>m_name>>r_year>>d_name;
f1<<m_name<<endl;
f1<<r_year<<endl;
f1<<d_name<<endl;
}
f1.close();
}
void disp(int n)
{
f2.open("mvi.txt",ios::in);
cout<<"disp emp deatils";
for(int i=0;i<n;i++)
{
f2>>m_name;
f2>>r_year;
f2>>d_name;
cout<<"mname="<<m_name;
cout<<"year="<<r_year;
cout<<"director name="<<d_name;
}
}
};
int main()
{
movie ob;
clrscr();
int n,i;
cout<<"enter limit";
cin>>n;
ob.accept(n);
ob.disp(n);
getch();
return 0;
}