  #include<iostream>
  #include<string.h>
  using namespace std;
  void swap (int *a,int *b)
  {
                 int t=*a;
                 *a=*b;
                 *b=t;
                 cout<<"\n swap value of a="<<*a;
                 cout<<"\n swap value of b="<<*b;
  }
  int main()
  {
                 int a,b;
                 cout<<"\n enter 2 numbers";
                 cin>>a>>b;
                 cout<<"\nbefore swap a="<<a;
                  cout<<"\nbefore swap b="<<b;
                  swap(&a,&b);
                  cout<<"\nafter swap a="<<a;
                  cout<<"\nafter swap b="<<b;
                  
                 
  }
  