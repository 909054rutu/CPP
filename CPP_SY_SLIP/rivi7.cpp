#include<iostream>
#include<stdlib.h>
using namespace std;
class demo
{
               public:
                              int replace(char s1[50],char c1,char c2)
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
                  cout<<"replace="<<s1;    
                  return cnt; 
}
                                                          
                                                
                              
};
int main()
{
               demo ob;
               
               cout<<"replace string="<<ob.replace("shrirampur",'r','l');
               
}