#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i=0;
	cout<<"enter no:";
	cin>>n;
	while(n>0)
	{
		a[i++]=n%2;
		n=n/2;
	}
	cout<<"binery no:";
	for(i=i-1;i>=0;i--)
	{
		cout<<a[i];
	}
}
