#include<iostream>
using namespace std;

class worker
{
               public:
                              char wname[10];
                              int hour;
                              int pay_rate=200;
                              float sal;
                              void accept()
                              {
                                             cout<<"accept wname hour";
                                             cin>>wname>>hour;
                              }
                              void cal()
                              {
                                   sal=hour*pay_rate;          
                              }
                              void disp()
                              {
                                             cout<<"wname="<<wname<<endl;
                                              cout<<"hours="<<hour<<endl;
                                              cout<<"sal="<<sal;
                              }
}ob;
int main()
{
               ob.accept();
               ob.cal();
               ob.disp();
}
