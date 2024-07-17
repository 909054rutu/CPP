#include<conio.h>
#include<iostream.h>
#include<string.h>
class stud
{
public:
int rno;
char name[20];
float per;
void accept(int rno,char name[20],float per)
{
this->rno=rno;
strcpy(this->name,name);
this->per=per;
}

void disp()
{
cout<<"rno="<<rno;
cout<<"name="<<name;
cout<<"per="<<per;
}
};
int main()
{
clrscr();
stud ob,ob1;
ob.accept(207,"on",90);
ob1.accept(808,"sai",80);
{
if(ob.per>ob1.per)
 ob.disp();
else
ob1.disp();
}
getch();
return 0;
}
