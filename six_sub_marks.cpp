#include<iostream>
using namespace std;
class student{
               public:
                              char sname[20];
                              int rno,t,m[6];
                              float p;
                              void accept()
                              {
                                             cout<<"enter rno sname:";
                                             cin>>rno>>sname;
                                             cout<<"6 sub marks:";
                                             for(int i=0;i<6;i++)
                                             cin>>m[i];
                                             
                              }
                              void cal()
                              {
                                              t=0;
                                             for(int i=0;i<6;i++)
                                             t=t+m[i];
                                             p=(float)t/6;
                                             
                              }
                              void disp()
                              {
                                             cout<<"rno="<<rno<<endl;
                                             cout<<"sname="<<sname<<endl;
                                             cout<<"total="<<t<<endl;
                                             cout<<"per="<<p<<endl;
                              }
               };
               int main()
               {
                  student ob;
                  ob.accept();
                  ob.cal();
                  ob.disp();           
               }