#include<iostream>
using namespace std;

template<class T1>
void min_max (T1 a,T1 b)
{
               if(a>b)
               cout<<"\n maximum no="<<a;
               else
               cout<<"\n minimum no="<<b;
}
int main()
{
               min_max(22,79);
               min_max(22.9f,79.7f);
}