#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
               int t=*a;
               *a=*b;
               *b=t;
               cout<<"\nswamping="<<*a;
                cout<<"\nswamping="<<*b;
}
int main()
{
               int a,b;
               cout<<"enter two numbre";
               cin>>a>>b;
               cout<<"\nbefore swap a="<<a;
                cout<<"\nbefore swap b="<<b;
                swap(&a,&b);
               cout<<"\nafter swap="<<a;
               cout<<"\nafter swap="<<b;
}