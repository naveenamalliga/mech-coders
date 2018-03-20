#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b[30],i,j,t,c,d;
    clrscr();
    printf("enter n values");
    scanf("%d",&a);
    printf("enter n numbers");
    for (i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a-1;i++)
    {
        for(j=i+1;j<a;j++)
        {
        if(b[i]>b[j])
        {
            t=b[i];
            b[i]=b[j];
            b[j]=t;
        }
    
    }
    }
    i=0;
    j=a-1;
    printf("the lowest number is %d",b[i]);
    printf("the highest number is %d",b[j]);
    getch();
}
