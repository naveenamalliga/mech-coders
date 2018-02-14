#include<stdio.h>
#include<conio.h>
void main()
{
long int n,a,d,sum=0;
int i;
clrscr();
printf("enter values of N,A,D");
scanf("%ld%ld%ld",&n,&a,&d);
for(i=1;i<=n;i++)
{
sum=sum+(a+(i-1)*d);
}
printf("Arithmatic progression until %ld is %ld",n,sum);
getch();
}
