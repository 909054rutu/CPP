#include<iostream>
using namespace std;
class internal
{
               public:
                              int m1[5];
                              void accept_inte()
                              {
                                             cout<<"Internal marks out of 30:";
                                             for(int i=0;i<5;i++)
                                             cin>>m1[i];
                              }
};
class External
{
               public:
                              int m2[5];
                              void accept_exter()
                              {
                                             cout<<"External marks out of 70:";
                                             for(int i=0;i<5;i++)
                                             cin>>m2[i];
                              }
};
class practical
{
               public:
                              int par;
                              void accept_practical()
                              {
                                             cout<<"practical marks out of 100:";
                                            
                                             cin>>par;
                              }
};
class result:public internal,public External,public practical
{
               public:
                              int t;
                              float p;
                              void cal()
                              {
                                             t=0;
                                             for(int i=0;i<5;i++)
                                             {
                                                            t=t+m1[i]+m2[i];
                                             }
                                             t=t+p;
                                             p=(float)t/6;
                              }
                              void disp()
                              {
                                             cout<<"\n Total marks="<<t;
                                              cout<<"\n per="<<p;
                                             
                              }
};
int main()
{
               result ob;
               ob.accept_inte();
               ob.accept_exter();
               ob.accept_practical();
               ob.cal();
               ob.disp();
}