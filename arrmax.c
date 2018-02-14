#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,t;
 long int a[20];
clrscr();
printf("enter the number of elements");
scanf("%ld",&n);
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
 printf("the maximum value in the array is %ld",a[i-1]);
 getch();
 }
