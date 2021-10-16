#include<stdio.h>
int main()
{
int grade,marks;
printf("enter the marks:");
scanf("%d",&marks);
if(marks>90)
{
for(marks=90;marks<100;marks++)
{
printf("grade obtained by the student is A");
}
}
else if(marks>80)
{
for(marks=80;marks<90;marks++)
{
printf("grade obtained by the student is B");
}
}
else
{
for(marks=40;marks<80;marks++)
{
printf("grade obtained by the student is P");
}
}
return 0;
}
