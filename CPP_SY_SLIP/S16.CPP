#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<iomanip.h>
class machine
{
public:
int m_id,price;
char m_name[20];
machine(int m_id,int price,char m_name[20])
{
this->m_id=m_id;
this->price=price;
strcpy(this->m_name,m_name);
}
machine(machine &ob1)
{
m_id=ob1.m_id;
price=ob1.price;
strcpy(m_name,ob1.m_name);
}
void disp()
{
cout<<setprecision(2);
cout<<setfill('*');
cout<<"machine id="<<setw(10)<<m_id<<endl;
cout<<"machine price="<<setw(10)<<price<<endl;
cout<<"machine name="<<m_name<<endl;
}
};
int main()
{
int m_id,price;
char name[60];
clrscr();
cout<<"enter m_id,price,name";
cin>>m_id>>price>>name;
machine ob(m_id,price,name);
machine ob1(ob);
ob.disp();
getch();
return 0;
}





