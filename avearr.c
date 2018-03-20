#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,j,t,c;
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
c=a[n/2];
printf("average of the array is %d",c);
getch();
}
