#include<iostream>
using namespace std;
class Integer
{
               public:
                              int a;
                              void accept()
                              {
                                             cout<<"enter number";
                                             cin>>a;
                              }
                             int operator +(Integer &ob)
                             {
                                            return a+ob.a;
                             }
                              int operator -(Integer &ob)
                             {
                                            return a-ob.a;
                             }
                              int operator *(Integer &ob)
                             {
                                            return a*ob.a;
                             }
                              int operator /(Integer &ob)
                             {
                                            return a/ob.a;
                             }
};
                        
int main()
{
               Integer ob,ob1;
               ob.accept();
               ob1.accept();
              
              cout<<ob+ob1<<endl;
              cout<<ob-ob1<<endl;
              cout<<ob*ob1<<endl;
              cout<<ob/ob1<<endl;
}