#include<iostream>
using namespace std;
class square
{
               public:
                              int s;
                              void accept()
                              {
                                cout<<"side";
                                cin>>s;             
                              }
                              int cal_s()
                              {
                                   return(s*s);          
                              }
                              void friend comp(int s,int r);
};
class rectangle
{
               public:
                              int l,b;
                              void accept()
                              {
                                cout<<"length bridth";
                                cin>>l>>b;             
                              }
                              int cal_r()
                              {
                                   return(l*b);          
                              }
                                 void friend comp(int s,int r);
                                 
};
void comp(int s,int r)

{
               if(s>r)
               {
                              cout<<"area of square is greater";
               }
                              else
                              {
                              
                              cout<<"rectangle is greate";
               }
}
int main()
{
               int square1,rectangle1;
               square ob;
               rectangle ob1;
               ob.accept();
               square1=ob.cal_s();
               ob1.accept();
               rectangle1=ob1.cal_r();
               cout<<"area squrae="<<square1;
               cout<<"are of rec="<<rectangle1;
               comp(square1,rectangle1);
               
}