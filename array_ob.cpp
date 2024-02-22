#include<iostream>
using namespace std;
class emp
{
               public:
                                              int eno;
                                             char ename[20];
                                             float sal;
                                             void accept()
                                             {
                                                            cout<<"Enter E_no E_name E_sal:";
                                                            cin>>eno>>ename>>sal;
                                             }
                                             void disp()
                                             {
                                                            cout<<"\nE_no"<<eno;
                                                            cout<<"\nE_name"<<ename;
                                                            cout<<"\nE_sal"<<sal;
                                                            
                                             }
};
int main()
{

emp ob[5];
for(int i=0;i<2;i++)
{
               ob[i].accept();
               
}
for(int i=0;i<2;i++)
{
               ob[i].disp();
               
}
}
