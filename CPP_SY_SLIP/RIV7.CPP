#include<iostream.h>
#include<conio.h>
class demo
{
public:
void replace(char s1[100],char c1,char c2,char c3)
{
int cnt=0;
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]==c1)
{
s1[i]=c2;
cnt++;
}
}
}
cout<<"string="<<s1;
return cnt;
};
int main()
{
demo ob;
cout<<"replace string="<<ob.replace("shrirampur",'r','l');
getch();
return 0;
}