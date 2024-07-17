#include<iostream.h>
#include<conio.h>
class account
{
public:
int ano,bal;
char type[20];
void accept()
{
cout<<"enter account info";
cin>>ano>>bal>>type;
}
void disp()
{
cout<<ano<<endl;
cout<<bal<<endl;
cout<<type<<endl;
}
};
int main()
{
account ob;
int *a,n,i;
cout<<"enter limit";
cin>>n;
a=new account[n];
for(i=0;i<n;i++)
{
ob.accept();
ob.disp();
}
getch();
return 0;
}