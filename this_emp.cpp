#include<iostream>
#include<string.h>
using namespace std;
class demo
{
               public:
                              int eno;
                              char name[20],add[20];
                              void accept(int eno1,char name1[20],char add1[20])
                              {
                                     this->eno=eno1;  
                                    strcpy( this->name,name1);  
                                    strcpy( this->add,add1);  
                                        
                              }
                              void disp()
                              {
                                             cout<<"emp no="<<eno<<endl;
                                             cout<<"emp name="<<name<<endl;
                                             cout<<"emp add="<<add<<endl;
                              }
                              
}ob;
int main()
{
                ob.accept(1,"om","pune");
                ob.disp();
}