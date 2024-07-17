#include<iostream>
using namespace std;

inline int max(int a,int b,int c)
{
               if(a>b&&a>c)
               return a;
               else if (b>a&&a>c)
               return b;
               else
               return c;
}
inline int min(int a,int b,int c)
{
               if(a<b&&a<c)
               return a;
               else if (b<a&&a<c)
               return b;
               else
               return c;
}
int main()
{
               int a,b,c;
               cout<<"enter three no";
               cin>>a>>b>>c;
               cout<<"maximum no="<<max(a,b,c);
                cout<<"minumum no="<<min(a,b,c);
}