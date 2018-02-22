
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b[10],i;
clrscr();
printf("enter the values of an array");
scanf("%d",&a);
printf(" enter the number of elements in an array");
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
printf("the index of an array");
for(i=0;i<a;i++)
{
printf("\n%d\t%d",b[i],i);
}
getch();
}

