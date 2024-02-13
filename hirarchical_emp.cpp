#include<iostream>
using namespace std;
class emp
{
               public:
                              int emp_no;
                              char name[20];
                              int sal;
                              void accept_e()
                              {
                                             cout<<"enter eno_no name:";
                                             cin>>emp_no>>name;
                              }
};
class fullTime:public emp
{
               public:
                              int daily_wages,no_of_days;
                              void accept_full()
                              {
                                             cout<<"enter daily wages and no_of_days:";
                                             cin>>daily_wages>>no_of_days;
                                             
                              }
                              void cal()
                              {
                                             sal=daily_wages*no_of_days;
                                             cout<<sal;
                              }
                              void disp_full()
                              {
                                             cout<<"\nemp no="<<emp_no;
                                             cout<<"\nemp name="<<name;
                                             cout<<"\ndaily wages="<<daily_wages;
                                             cout<<"\nno_of_days="<<no_of_days;
                                             cout<<"\nsal="<<sal;
                              }
};

class PartTime:public emp
{
               public:
                              int no_of_hours,hourly_wages;
                              void accept_Part()
                              {
                                             cout<<"enter no_of_hours hourly wages:";
                                             cin>>no_of_hours>>hourly_wages;
                                             
                              }
                              void cal_part()
                              {
                                             sal=no_of_hours*hourly_wages;;
                                             cout<<sal;
                              }
                              void disp_Part()
                              {
                                             cout<<"\nemp no="<<emp_no;
                                             cout<<"\nemp name="<<name;
                                             cout<<"\nno_of_hours="<<no_of_hours;
                                             cout<<"\nhourly_wages="<<hourly_wages;
                                             cout<<"\nsal="<<sal;
                              }
};
int main()
{
           fullTime ob1;  
           PartTime ob2;
           ob1.accept_e();
           ob1.accept_full();   
           ob1.cal();
           ob1.disp_full();
            ob2.accept_e();
           ob2.accept_Part();   
           ob2.cal_part();
           ob2.disp_Part();
}

