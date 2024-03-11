#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
int main()
{
ifstream f1;
char ch;
clrscr();
f1.open("r_file.txt",ios::in);
if(f1.fail())
{
cout<<"file no found";
getch();
exit(0);
}
while(!f1.eof())
{
f1.get(ch);
cout<<ch;
}
f1.close();
getch();
return 0;
}