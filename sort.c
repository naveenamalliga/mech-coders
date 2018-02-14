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
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("sorted array is");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
getch();
}


