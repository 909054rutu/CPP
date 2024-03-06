#include<iostream>
using namespace std;

template<class T1>
void sort(T1 a[])
{
    int i, pass;
    T1 t;
    for(pass=1; pass<5; pass++)
    {
        for(i=0; i<5-pass; i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    cout<<"\n sorted element:";
    for(i=0; i<5; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int a[5];
    float b[5];
    //char c[5];
    cout<<"Enter integer array element:";
    for(int i=0; i<5; i++)
        cin>>a[i];
    sort(a);
    cout<<endl;
    cout<<"Enter float array element:";
    for(int i=0; i<5; i++)
        cin>>b[i];
    sort(b);
    cout<<endl;
    //cout<<"Enter char string array element:";
    //for(int i=0;i<5;i++)
    //cin>>c[i];
    //sort(c);
}
