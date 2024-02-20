#include<iostream>
#include<string.h>
using namespace std;
class demo
{
               public:
                              int eno;
                              char name[20],add[20];
                              float sal;
                              void accept(int eno1,char name1[20],char add1[20],float sal)
                              {
                                     this->eno=eno1;  
                                    strcpy( this->name,name1);  
                                    strcpy( this->add,add1);
                                    this->sal=sal;  
                                        
                              }
                              void disp()
                              {
                                             cout<<"emp no="<<eno<<endl;
                                             cout<<"emp name="<<name<<endl;
                                             cout<<"emp add="<<add<<endl;
                                              cout<<"emp sal="<<sal<<endl;
                              }
                              
}ob,ob1;
int main()
{
                ob.accept(1,"om","pune",90000);
                 ob1.accept(2,"sai","mumbai",100000);
                 if(ob.sal>ob1.sal)
                ob.disp();
                else
                ob1.disp();
}