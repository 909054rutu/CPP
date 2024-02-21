#include<iostream>
using namespace std;
class pattern
{
               public:
               
                              void disp()
                              {
                                             for(char i='A';i<='D';i++)
                                             {
                                                            for( char j='A';j<=i;j++)
                                             
                                                            cout<<j;
                                             {
                                                            cout<<"\n";
                                             }
                              }
               }
};
int main()
{
               pattern ob;
              
               ob.disp();
}