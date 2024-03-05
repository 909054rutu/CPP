#include<iostream>
using namespace std;
class MyString
{
               public:
                              char s1[20];
                              void accept()
                              {
                                             cout<<"Enter String:";
                                             cin>>s1;
                                             
                              }
                              void disp()
                              {
                                             cout<<"\nDisp String:"<<s1;
                                             
                              }
                              void operator +(MyString &ob1)
                              {
                                             strcat(s1,ob1.s1);
                                             cout<<"\nconcat string="<<s1;
                              }
};
int main()
{
               MyString ob,ob1;
               ob.accept();
               ob1.accept();
               ob.disp();
               ob1.disp();
               ob+ob1;
}