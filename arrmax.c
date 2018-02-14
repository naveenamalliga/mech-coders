#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,j,t;
clrscr();
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the array values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 if(a[i]>a[i+1])
 {
 a[i+1]=a[i];
 }
 }
 printf("the maximum value in the array is %d",a[i-1]);
 getch();
 }
