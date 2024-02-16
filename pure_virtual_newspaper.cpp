#include<iostream>
using namespace std;
class media
{
               public:
                              virtual void accept()=0;
                               virtual void disp()=0;
                             
};
class newspaper:public media
{
               public:
               char n_name[10],n_editor[10],n_price[10];
               int no_of_pages;
                              void accept()
               {
                              cout<<"enter n_name editor price no_of_pages:";
                              cin>>n_name>>n_editor>>n_price>>no_of_pages;
                             
                             
               }
               void disp()
               
               {
                       cout<<n_name<<endl;
                       cout<<n_editor<<endl;
                       cout<<n_price<<endl;
                       cout<<no_of_pages<<endl;       
               }
};

class magazine :public media
{
               public:
               char m_name[10],m_editor[10],m_price[10];
                              void accept()
               {
                              cout<<" enter m_name editor price:";
                              cin>>m_name>>m_editor>>m_price;
                             
                             
               }
               void disp()
               {
                       cout<<m_name<<endl;
                       cout<<m_editor<<endl;
                       cout<<m_price<<endl;
                           
               }
};
int main()
{
        newspaper ob;
        magazine ob1; 
        
        ob.accept();
        ob.accept();
        ob1.accept();
        ob1.accept();
        
          
}