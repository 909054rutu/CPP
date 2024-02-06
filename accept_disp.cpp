#include<iostream>
using namespace std;
class customer{
               public:
                              int id;
                              char name[20],add[10],phone[20];
                              void accept()
                              {
                                             cout<<"enter id name add phone:";
                                             cin>>id>>name>>add>>phone;
                              }
                              void disp()
                              {
                                             cout<<"id="<<id<<endl;
                                             cout<<"name="<<name<<endl;
                                             cout<<"add="<<add<<endl;
                                             cout<<"phone="<<phone<<endl;
                              }
               
};
int main()
{
               customer ob;
               
               ob.accept();
               ob.disp();
}