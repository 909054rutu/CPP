
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<ctype.h>
int main()
{
ifstream f1;
ofstream f2,f3;
char ch;
clrscr();
f1.open("char_di.txt",ios::in);
f2.open("char.txt",ios::out);
f3.open("digit.txt",ios::out);
if(f1.fail())
{
cout<<"file not found";
getch();
return 0;
}
while(!f1.eof())
{
f1.get(ch);
if(isalpha(ch))
f2.put(ch);
else if(isdigit(ch))
f3.put(ch);
}
cout<<"copy succ...";
f1.close();
f2.close();
f3.close();
getch();
return 0;
}