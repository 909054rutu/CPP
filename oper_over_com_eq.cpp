#include<iostream>
using namespace std;
class MyString
{
               public:
                          char *s1;
                          void accept()
                          {
                                         s1=new char(20);
                                         cout<<"enter string";
                                         cin>>s1;
                          }
                          void disp()
                          {
                                         cout<<"\n string="<<s1;
                          }
                          void operator +(MyString &ob1)
                          {
                                         strcat(s1,ob1.s1);
                                         cout<<"\n Disp concat string="<<s1;
                          }
                           void operator != (MyString &ob1)
                          {
                                       int k=strcmp(s1,ob1.s1);
                                       if(k!=0)
                                       cout<<"\n string are not same";
                                       else
                                        cout<<"\n string are same";
                                        
                          }
                           void operator < (MyString &ob1)
                          {
                                         int a=strlen(s1);
                                         int b=strlen(ob1.s1);
                                         if(a<b)
                                         cout<<"\nFirst String Is less";
                                         else
                                         cout<<"\nSecond String Is less";
                          }
           };

int main()
{
               MyString ob,ob1;
               ob.accept();
               ob1.accept();
               ob.disp();
               ob1.disp();
               ob!=ob1;
               ob<ob1;       
               ob+ob1;
}