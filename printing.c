#include<stdio.h>
#include<conio.h>
void main()
{
int n,c;
printf("enter number");
scanf("%d",&n);
printf("digits");
while(n!=0)
{
    c=n%10;
    n=n/10;
    printf("\n%d",c);
    
}
getch();
}
