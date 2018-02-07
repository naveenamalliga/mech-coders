#include<stdio.h>
#include<conio.h>
void main()
{
  int n,r,s=0,t;
  clrscr();
  printf("Enter the number");
  scanf("%d",&n);
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
