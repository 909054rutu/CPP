#include<iostream>
using namespace std;
class pattern
{
               public:
               
                              void disp()
                              {
                                             for(int i=1;i<=4;i++)
                                             {
                                                            for( int j=4;j>i;j--)
                                             {
                                             
                                                            cout<<" ";
                                             }
                                                for( int j=1;j<=i;j++)
                                                {
                                                               cout<<"*";
                                                }
                                             
                                                            cout<<"\n";
                                             }
                              }

};
int main()
{
               pattern ob;
              
               ob.disp();
}