#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=1,i=1;
clrscr();
printf("enter the base and exponent");
scanf("%d%d",&a,&b);
  while(i<=b)
  {
    c=c*i;
    i++;
  }
  printf("%d",c);
getch();
}


