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
}ob1[100],ob2[100];
int main()
{
           fullTime ob1[5];
           PartTime ob2[5];
           int n,ch;
           cout<<"\n enter limit:";
           cin>>n;
           
           do{
                  cout<<"\n enter choice:\n1 FullTime\n 2-partTime";
                  cin>>ch;
                  switch(ch)
                          
           
           {
                case 1:for(int i=0;i<2;i++)
               {
               
           ob1[i].accept_e();
           ob1[i].accept_full();   
           ob1[i].cal();
           ob1[i].disp_full();
}
             
                break;
                 
                
                case 2:for(int i=0;i<2;i++)
                {
                   ob2[i].accept_e();   
           ob2[i].accept_Part();   
           ob2[i].cal_part();
           ob2[i].disp_Part();
           }
           break;
}
}while(ch<3);
}

