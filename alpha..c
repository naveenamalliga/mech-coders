#include<stdio.h>
#include<conio.h>
void main()
{
char alp;
clrscr();
printf("enter the character");
scanf("%c",&alp);
if(((alp>='A')&&(alp<='Z'))||((alp>='a')&&(alp<='z')))

printf("%c is alphabet",alp);

  else

printf("not alphabet");
 getch(); 

}
