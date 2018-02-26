#include<stdio.h>
#include<conio.h>
void main()
{
int a,hr=0;
clrscr();
printf("enter the minutes");
scanf("%d",&a);
while(a>59)
{
a=a-60;
hr++;
}
printf("%d:%d",hr,a);
getch();
}
