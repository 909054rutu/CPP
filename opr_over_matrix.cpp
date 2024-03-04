#include<iostream>
using namespace std;
class MyMatrix{
               public:
                              int a[10][10],i,j;
                              void accept()
                              {
                                             cout<<"Enter matrix";
                                             for(i=0;i<2;i++)
                                             for(j=0;j<2;j++)
                                             cin>>a[i][j];
                              }
                              void disp()
                              {
                                             cout<<"\nMytrix:\n";
                                             for(i=0;i<2;i++)
                                             {
                                                            for(j=0;j<2;j++)
                                                            {
                                                                           cout<<a[i][j]<<"\t";
                                                            }
                                             }
                                             cout<<endl;
                              }
                              void operator -(MyMatrix &ob1)
                              {
                                              for(i=0;i<2;i++)
                                             {
                                                            for(j=0;j<2;j++)
                                                            {
                                                                           a[i][j]=a[i][j]-ob1.a[i][j];
                                                            }
                                             }
                                           
                                             
                              }
};
int main()
{
               class MyMatrix ob,ob1;
               ob.accept();
               ob1.accept();
               ob.disp();
               ob1.disp();
               ob-ob1;
               ob.disp();
              
               
}