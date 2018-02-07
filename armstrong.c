#include<stdio.h>
#include<conio.h>
void main()
{
  int r,s=0,t;
  long int n;
  clrscr();
  printf("Enter the number");
  scanf("%ld",&n);
  t=n;
  while(n!=0)
  {
  r=n%10;
  s=s+(r*r*r);
  n=n/10;
  }
  if(s==t)
  {
  printf("Yes");
  }
  else
  {
  printf("No");
  }
  getch();
 } 
