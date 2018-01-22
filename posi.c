#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the number");
scanf("%d",&a);
if(a==0)
{
printf("the entered number is zero");
}
else if(a<0)
{
printf("The entered number is negative");
}
else
{
printf("The entered number is positive");
}
getch();
}
