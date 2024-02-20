#include<iostream>
#include<string.h>
using namespace std;
class emp{
               public:
                              int eno;
                              char name[20];
                              float sal;
                              void accept();
                              void display();
};
void emp::accept()
{
               cout<<"enter E_no Name Sal";
               cin>>eno>>name>>sal;
}
void emp::display()
{
               cout<<eno<<endl;
               cout<<name<<endl;
               cout<<sal<<endl;
}
int main()
{
               emp ob;
               ob.accept();
               ob.display();
}