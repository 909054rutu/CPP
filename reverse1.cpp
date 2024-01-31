#include<iostream>
using namespace std;
int main()
{
int d,n,r=0,n1;
cout<<"enter no:";
cin>>n;
while(n>0)
{
               d=n%10;
               r=r*10+d;
               n=n/10;
               
}
if(n1==n)
cout<<"---="<<r;
}