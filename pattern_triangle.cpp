#include<iostream>
using namespace std;
class Triangle
{
               public:
                              void disp()
                              {
                                             int i,k,j;
                                             for(i=1;i<=5;i++)
                                             {
                                             
                                                
                                             for(k=5-i;k>0;k--)
                                             {
                                             
                                             
                                                            cout<<" ";
                                             }
                                             
                              
                                             for(j=1;j<=i;j++)
                                             {
                                             
                                                            cout<<"* ";
                                             
                                                            
                                                       }                    cout<<endl;
                                                            
                                             
                             }
                              
                              }
};
int main()
{
               Triangle ob;
               ob.disp();
               
}