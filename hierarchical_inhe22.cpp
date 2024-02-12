#include<iostream>
using namespace std;
class college
{
               public:
                              int cno;
                              char cname[20],cadd[20];
                              void accept()
                              {
                                             cout<<"enter college no name add:";
                                             cin>>cno>>cname>>cadd;
                              }
                              
};
class teacher:public college
{
               public:
                              int tno;
                              char tname[20],tsub[20];
                              
                                             void accept_t()
                                             {
                                                            cout<<"enter teacher info:";
                                                            cin>>tno>>tname>>tsub;
                                             }
                                             void display_c()
                              {
                                             cout<<"college no="<<cno<<endl;
                                             cout<<"college name="<<cname<<endl;
                                             cout<<"college add="<<cadd<<endl;
                                             cout<<"teacher no="<<tno<<endl;
                                    cout<<"teacher name="<<tname<<endl;
                                    cout<<"teacher sub="<<tsub<<endl;
                              }
                                            
                                             
                              
};
class student:public college
{
               public:
                              int rno,per;
                              char s_name[20];
                              void accept_s()
                              {
                                             cout<<"enter student info:";
                                             cin>>rno>>per>>s_name;
                              }
                              void display()
                              {
                                    cout<<"rno="<<rno<<endl;
                                    cout<<"per="<<per<<endl;
                                    cout<<"sname="<<s_name<<endl;
                                        cout<<"college no="<<cno<<endl;
                                             cout<<"college name="<<cname<<endl;
                                             cout<<"college add="<<cadd<<endl;  
                              }
                              
};
int main()
{
               teacher ob1;
               student ob2;
               ob1.accept();
               ob1.accept_t();
               ob1.display_c();
               ob2.accept();
               ob2.accept_s();
               ob2.display();
               
               
}
