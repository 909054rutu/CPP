#include<conio.h>
#include<iostream.h>
void swap(int *a,int *b)
{
int *t=*a;
*a=*b;
*b=*t;
cout<<"\n swap value a="<<a;
cout<<"\n swap value b="<<b;
getch();
return 0;
}
