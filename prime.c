#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i,count=0;
  clrscr();
  printf("Enter the number");
  scanf("%d",&a);
  for(i=0;i<=a;i++)
  {
  if(a%i==0)
  {
  count++;
  break;
  }
  }
  if(count==2)
  {
  printf("Entered number is prime");
  }
  else
  {
  printf("Entered number is not prime");
  }
  getch();
 } 
