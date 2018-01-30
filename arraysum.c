#include<stdio.h>
#include<conio.h>
void main();
{
  int a[b],b,c,i,sum;
  clrscr();
  printf("enter the N and K numbers");
  scanf("%d%d",&b,&c);
  printf("enter the array of %d integers",b);
  scanf("%d",&a);
  for(i=0;i<=c;i++)
  {
      sum=a[0]+a[i];
  }
  printf("the sum of the first %d integers=%d",c,sum);
  getch();
}
