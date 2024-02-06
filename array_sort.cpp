#include<iostream>
using namespace std;

class sort{
 public:
 void sort1(int a[100],int n)
 {
   int pass,t,i;
    for(pass=0;pass<n;pass++)
   {
  for(i=0;i<n-pass;i++)
  {
  if(a[i]>a[i+1])
   {
   t=a[i];
  a[i]=a[i+1];
   a[i+1]=t;
   }
  }
 }
                                             
cout<<"sorted array=";
 for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
}

void sort1(float a[100],int n)
 {
   int pass,i;
   float t;
    for(pass=0;pass<n;pass++)
   {
  for(i=0;i<n-pass;i++)
  {
  if(a[i]>a[i+1])
   {
   t=a[i];
  a[i]=a[i+1];
   a[i+1]=t;
   }
  }
 }
                                             
cout<<"\n sorted array=";
 for(i=0;i<n;i++)
{
cout<<a[i]<<"\t"<<endl;
}
}
};
int main()
{
sort ob;
  int a[]={88,77,66,5,4,9,6,9};
  float b[]={8.7,7.8,6.3,7,4.7,9.9,6.3};
   ob.sort1(a,8);
   ob.sort1(b,7);
}