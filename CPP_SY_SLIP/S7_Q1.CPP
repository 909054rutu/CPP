
#include<iostream>
using namespace std;
class Demo
{
public:
int replace(char s1[100],char c1,char c2)
{
int cnt=0;
for(int i=0;s1[i]!='\0';i++)
{
if(s1[i]==c1)
{
s1[i]=c2;
cnt++;
}
}
cout<<"\n replace string="<<s1;
return cnt;
}
};
int main()
{
Demo ob;
cout<<"number of replace ment="<<ob.replace("shrirampur",'r','z');

}
