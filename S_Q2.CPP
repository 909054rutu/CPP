#include<conio.h>
#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>
class MyFile
{
public:
char ch;
fstream f1,f2;
ofstream f3;
void accept()
{
f1.open("s1.txt",ios::in);
f2.open("s2.txt",ios::in);
f3.open("s3.txt",ios::out);
if(f1.fail()||f2.fail())
{
cout<<"file not found";
getch();
exit(0);
}
}
void operator+(MyFile &ob)
{
while(!f1.eof())
{
f1.get(ch);
f3.put(ch);
}
while(!f2.eof())
{
f2.get(ch);
f3.put(ch);
}
f1.close();
f2.close();
f3.close();
cout<<"concat succ";
}
};
int main()
{
MyFile ob,ob1;
clrscr();
ob.accept();
ob1.accept();
ob+ob1;
getch();
return 0;
}
