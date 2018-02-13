#include<stdio.h>
#include<conio.h>
int main()
{
  long int a,b,c;
  clrscr();
  printf("Enter 2 numbers");
  scanf("%ld%ld",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("%ld%ld",a,b);
  getch();
  }
