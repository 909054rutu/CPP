#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
class machine
{

int id,price;
char name[20];
public:
machine(int id,int price,char name[20])
{
this->id=id;
this->price=price;
strcpy(this->name,name);
}
machine(machine &ob)
{
id=ob.id;
price=ob.price;
strcpy(name,name);
}
void disp()
{
cout<<"\n machine id="<<setw(2)<<id;
cout<<"\n price="<<setprecision(2)<<price;
cout<<"\n name="<<setw(8)<<name;
}
};
int main()
{
clrscr();
int id,price;
char name[20];
cout<<"enter id price name";
cin>>id>>price>>name;
machine ob(id,price,name);
machine ob1(ob);
ob.disp();
getch();
return 0;
}


