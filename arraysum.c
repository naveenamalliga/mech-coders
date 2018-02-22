#include<stdio.h>
#include<conio.h>
void main()
{
  int a[100],b,c,i,sum=0;
  clrscr();
  printf("enter the N and K numbers");
  scanf("%d%d",&b,&c);
  printf("enter the array of %d integers",b);
  for(i=0;i<b;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<c;i++)
  {
      sum=sum+a[i];
  }
  printf("the sum of the first %d integers=%d",c,sum);
  getch();
}
