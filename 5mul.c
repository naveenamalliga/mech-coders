
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,b,i;
    clrscr();
    printf("enter the number");
    scanf("%d",&n);
    printf("the 5 multiplies of the given number is");
    for(i=1;i<=5;i++)
    {
        b=n*i;
        printf("\n%d ",b);
    }
    getch();

}
