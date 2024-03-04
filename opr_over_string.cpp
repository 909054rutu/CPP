#include<iostream>
using namespace std;
class MyString{
               public:
                              char s1[20];
                              void accept()
                              {
                                             cout<<"Enter sting";
                                             cin>>s1;
                              }
                              void disp()
                              {
                                             cout<<"\n String:"<<s1;
                              }
                              void operator +(MyString &ob1)
                              {
                                             strcat(s1,ob1.s1);
                                             cout<<"\n Concat String="<<s1;
                                             
                              }
};
int main()
{
               class MyString ob,ob1;
               ob.accept();
               ob1.accept();
               ob.disp();
               ob+ob1;
               
}