  #include<iostream>
  #include<string.h>
  using namespace std;
  class worker
  {
                 public:
                                char wname[20];
                                int hr;
                                float prate,sal;
                                void accept(char wname1[20],int hr1,float prate1=50.0f)
                                {
                                               strcpy(wname,wname1);
                                               hr=hr1;
                                               prate=prate1;
                                              
                                }
                                void cal()
                                {
                                               sal=prate*hr;
                                }
                                void disp()
                                {
                                               cout<<"\n worker name="<<wname;
                                                cout<<"\n worker hours="<<hr;
                                                 cout<<"\n pay rate="<<prate;
                                                  cout<<"\n salary="<<sal;
                                                 
                                }
  };
  int main()
  {
                 worker ob,ob1;
                 ob.accept("om",10,200,shrirampur,900);
                 ob.cal();
                 ob.disp();
                 ob1.accept("sai",20,100.9f,nashik,800);
                 ob1.cal();
                 ob1.disp();
  }