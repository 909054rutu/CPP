#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
int main()
{
ifstream f1;
ofstream f2;
char ch;
clrscr();
f1.open("c_file.txt",ios::in);
f2.open("c_patt.txt",ios::out);
if(f1.bad())
{
cout<<"file not found";
getch();
exit(0);
}
while(!f1.eof())
{
f1.get(ch);
f2.put(ch);
}
cout<<"file copy succ...";
f1.close();
f2.close();
getch();
return 0;
}
