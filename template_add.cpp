#include<iostream>
using namespace std;

template<class T1>
void add (T1 a,T1 b)
{
               T1 c=a+b;
               cout<<"Addition="<<c;
}
int main()
{
               add(11,22);
               cout<<endl;
               add(22.1f,33.11f);
                cout<<endl;
               add(22.33,99.1);
}