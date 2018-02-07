#include<stdio.h>
#include<conio.h>
void main()
{
 long int a,b,i;
printf("enter the interval");
scanf("%ld%ld",&a,&b);
printf("odd numbers between the interval");
for(i=a+1;i<b;i++)
{
if((i%2)!=0)
{
printf("%d\n",i);
}
}
getch();
}
