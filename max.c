#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,max;
clrscr();
printf("enter the 10 numbers");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<10;i++)
{
if(a[0]<a[i])
{
max=a[i];
}
}
printf("%d",max);
getch();
}
