#include<stdio.h>
#include<conio.h>
int main()
{
  int r,a,b,i,t,s;
  clrscr();
  printf("Enter the interval");
  scanf("%d%d",&a,&b);
  printf("tne armstrong number between the intervals are");
  for(i=a+1;i<b;i++)
  {
    t=i;
    s=0;
    while(t!=0)
      {
       r=t%10;
       s=s+(r*r*r);
       t=t/10;
      }
    if(i==s)
    printf("%d",i);
  }
 return 0;
 } 

