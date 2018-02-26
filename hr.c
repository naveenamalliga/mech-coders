#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f,hr=0;
clrscr();
printf("enter the two times in hours and minutes");
scanf("%d%d%d%d",&a,&b,&c,&d);
  a=(a*60)+b;
  c=(c*60)+d;
  if(a>c)
  {
  e=a-c;
  }
  else
  {
  e=c-a;
  }
while(e>59)
{
e=e-60;
hr++;
}
printf("%d:%d",hr,e);
getch();
}

