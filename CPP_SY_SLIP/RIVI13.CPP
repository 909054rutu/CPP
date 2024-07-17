#include<iostream.h>
#include<conio.h>
class product
{
public:
int pid;
char pname;
int qut;
void accept()
{
cout<<"product id pname qut";
cin>>pid>>pname>>qut;
static int c1;
c1=cnt;
cnt++;
{
cout<<"count="<<c1;
}
}
void disp()
{
cout<<"pid="<<pid<<endl;
cout<<"pname="<<pname<<endl;
cout<<"qut="<<qut<<endl;
}
};
int main()
{
person ob;
ob.accept();
ob.disp();
getch();
return 0;
}

