#include<iostream>
using namespace std;
class student
{
               public:
                              int rno;
                              char sname[20],add[20];
                              void accepts()
                              {
                                             cout<<"enter rno name add:";
                                             cin>>rno>>sname>>add;
                              }
};
class exam:public student
{
               public:
                              int m[6];
                              void accept_marks()
                              {
                                             cout<<"enter 6 sub marks:";
                                             for(int i=0;i<6;i++)
                                             {
                                                            cin>>m[i];
                                             }
                                             
                              }
};
class result:public exam
{
               public:
                              int t;
                              float p;
                              void cal()
                              {
                                             t=0;
                                             for(int i=0;i<6;i++)
                                             t=t+m[i];
                                             p=(float)t/6;
                                             
                              }
                              void display()
                              {
                                             cout<<"student rno="<<rno<<endl;
                                              cout<<"student name="<<sname<<endl;
                                               cout<<"student add="<<add<<endl;
                                                cout<<"student total="<<t<<endl;
                                                 cout<<"student per="<<p<<endl;
                              }
};
int main()
{
               result ob;
               ob.accepts();
               ob.accept_marks();
               ob.cal();
               ob.display();
               
}