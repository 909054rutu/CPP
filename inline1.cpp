#include<iostream>
using namespace std;
inline float area(float l,float w)
{
               return l*w;
}
inline float parimeter(float l,float w)
{
               return 2*(l+w);
}
int main()
{
               float l,w;
               cout<<"enter length and width:";
               cin>>l>>w;
               cout<<"\n area of rectangle="<<area(l,w);
                cout<<"\n parimeter of rectangle="<<parimeter(l,w);
}