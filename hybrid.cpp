#include<iostream>
using namespace std;
class student
{
               public:
                              int rno;
                              char name[20];
                              void accept_S()
                              {
                                             cout<<"enter roll no name:";
                                             cin>>rno>>name;
                              }
};
class Internal:public virtual student
{
               public:
                              int m1[5];
                              void accept_int()
                              {
                                             cout<<"\n enter internal marks:";
                                             for(int i=0;i<5;i++)
                                             cin>>m1[i];
                              }
};
class External:virtual public student
{
               public:
                              int m2[5];
                              void accept_ext()
                              {
                                             cout<<"\n enter external marks:";
                                             for(int i=0;i<5;i++)
                                             cin>>m2[i];
                              }
};
class practical:virtual public student
{
               public:
                              int p;
                              void accept_pra()
                              {
                                             cout<<"\n enter practical marks:";
              
                                             cin>>p;
                              }
};
class result:public Internal,public External,public practical
{
               public:
                              int t;
                              float per;
                              void cal()
                              {
                                             t=0;for(int i=0;i<5;i++)
                                             {
                                                            t=t+m1[i]+m2[i];
                                             }
                                             t=t+p;
                                             per=(float)t/6;
                              }
                              void disp()
                              {
                                             cout<<"\n Roll no="<<rno;
                                              cout<<"\n name="<<name;
                                               cout<<"\n Total="<<t; 
                                               cout<<"\n per"<<per;
                              }
};
int main()
{
               result ob;
               ob.accept_S();
               ob.accept_int();
               ob.accept_ext();
               ob.accept_pra();
               ob.cal();
               ob.disp();
             
}