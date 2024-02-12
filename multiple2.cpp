#include<iostream>
using namespace std;
class personnel
{
              
public:
char name[20],add[20], email[20];
char birth_date[10];
                               
                              void accept_p()
                              {
                                             cout<<"enter name add email birth_date:";
                                             cin>>name>>add>>email>>birth_date;
                              }
};
class Academic
{
               public:
                              int ssc,hsc,p_class;
                              void accept_A()
                              {
                                             cout<<"ssc hsc p_class:";
                                             cin>>ssc>>hsc>>p_class;
                                             
                              }
};
class BioData:public personnel,public Academic
{
               public:
              void disp()
              {
                             cout<<"\n name="<<name;
                              cout<<"\n add="<<add;
                               cout<<"\n email="<<email;
                               cout<<"\n birth_date="<<birth_date;
                               cout<<"\n ssc="<<ssc;
                                cout<<"\n hsc="<<hsc;
                                cout<<"\n p_class="<<p_class;
                               
                             
              }
                              
};
int main()
{
               BioData ob;
               ob.accept_p();
               ob.accept_A();
               ob.disp();
               
}
                              