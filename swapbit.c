#include<stdio.h>
#include<conio.h>
int main()
{
  long int a,b;
  clrscr();
  printf("Enter 2 numbers");
  scanf("%ld%ld",&a,&b);
  a=a^b;
  b=b^a;
  a=a^b;
  printf("%ld\t%ld",a,b);
  getch();
  }
