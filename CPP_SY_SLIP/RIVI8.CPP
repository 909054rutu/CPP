#include<iostream>
using namespace std;
class number
{
               public:
               
               static void disp()
               { 
               static int cnt;
                              cnt++;
                              cout<<"count="<<cnt;
               }
};
int main()
{
               number ob,ob1,ob2;
               ob.disp();
               ob1.disp();
               ob2.disp();
}