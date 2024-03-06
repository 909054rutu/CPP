#include<iostream>
using namespace std;
int main()
{
int a,b,ch,c;

cout<<"Enter two numbers:";
cin>>a>>b;
cout<<"1  2  3  4 Enter choice";
cin>>ch;
switch(ch)
{
case 1:c=a+b;
       cout<<"Addition="<<c;
       break;
case 2:c=a-b;
       cout<<"Substraction="<<c;
       break;
case 3:c=a*b;
       cout<<"Multiplication="<<c;
       break;
case 4:c=a/b;
       cout<<"Division="<<c;
       break;
default: cout<<"Invalid choice:";
	break;
}

}