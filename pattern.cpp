#include<iostream>
using namespace std;
class pattern
{
               public:
                              int n;
                              void accept()
                              {
                                          cout<<"\n enter limit:";
                                          cin>>n;   
                              }
                              void disp()
                              {
                                             for(int i=1;i<=4;i++)
                                             {
                                                            for( int j=1;j<=i;j++)
                                             
                                                            cout<<i;
                                             {
                                                            cout<<"\n";
                                             }
                              }
               }
};
int main()
{
               pattern ob;
               ob.accept();
               ob.disp();
}