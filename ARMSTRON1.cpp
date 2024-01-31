#include<iostream>
using namespace std;
int main()
{
int d,n,s,n1;
for(n=1;n<=500;n++)
{
s=0;
n1=n;
while(n1>0)
{
d=n1%10;
s=s+d*d*d;
n1=n1/10;
}
if(n==s)
cout<<"\n ="<<n;
}
}