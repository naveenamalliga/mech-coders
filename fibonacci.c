#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,d,c,i;
clrscr();
printf("enter the  N value");
scanf("%d",&d);
printf("%d",b);
for(i=1;i<d;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
getch();
}


