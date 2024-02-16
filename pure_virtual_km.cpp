#include<iostream>
using namespace std;
class conversion
{
               public:
                              virtual void read()=0;
                               virtual void covert()=0;
                                virtual void disp()=0;
};
class weight:public conversion
{
               public:
                              float gm,kg;
                              void read()
                              {
                                             cout<<" enter weight in kg:";
                                             cin>>kg;
                              }
                              void covert()
                              {
                                             gm=1000*kg;
                              }
                              void disp()
                              {
                                             cout<<"weight in gram="<<gm;
                              }
};
class volume:public conversion
{
               public:
                              float ml,l;
                              void read()
                              {
                                             cout<<"enter militer:";
                                             cin>>ml;
                              }
                              void covert()
                              {
                                             l=1000*ml;
                              }
                              void disp()
                              {
                                             cout<<"militer in liter="<<l;
                              }
};
class currency:public conversion
{
               public:
                              float rup,paise;
                              void read()
                              {
                                             cout<<"enter rupes:";
                                             cin>>rup;
                              }
                              void covert()
                              {
                                             paise=100*rup;
                              }
                              void disp()
                              {
                                             cout<<"rupes in paise="<<paise;
                              }
};
int main()
{
              weight ob;
               volume ob1;
                 currency ob2;
               ob.read();
               ob.covert();
               ob.disp();
               ob1.read();
               ob1.covert();
               ob1.disp();
               ob2.read();
               ob2.covert();
               ob2.disp();
}