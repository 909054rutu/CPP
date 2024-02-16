#include<iostream>
using namespace std;
class college
{
               public:
                              virtual void even_odd(int n)=0;
                               virtual void square(int n)=0;
};
class student:public college
{
               public:
                              void even_odd(int n)
                              {
                                             if(n%2==0)
                                             cout<<"\neven";
                                             else
                                             cout<<"\nodd";
                              }
                              void square(int n)
                              {
                                             int c=n*n*n;
                                             cout<<"cube="<<c;
                              }
};
int main()
{
               student ob;
               ob.even_odd(10);
               ob.square(3);
               
}