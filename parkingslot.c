#include<stdio.h>
#include<conio.h>
void main()
{
 long int a[5],d;
 char b[30];
 int c,i,e=0;
 clrscr();
 printf("enter the mall name");
 scanf("%s",b);
 printf("enter the parking slot number");
 scanf("%d",&c);
 printf("enter the car numbers");
 for(i=0;i<5;i++)
 {
     scanf("%ld",&a[i]);
 }
 printf("enter your friend's car number");
 scanf("%ld",&d);
 for(i=0;i<5;i++)
{
  if(d==a[i])
  {
     e=e+1;
  }
}
if(e==1)
{
    printf("Your car is here you have take the car and tou can have a happy journey");
}
else
{
    printf("Your car is not here,search in another parking slot");
}
getch();
}
