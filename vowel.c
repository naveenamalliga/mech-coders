 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 char b,c,d,f,g,h;
 c='a';
 d='e';
 f='i';
 g='o';
 h='u';
 clrscr();
 printf("enter the character");
 scanf("%c",&b);
 if((b==c)||(b==d)||(b==f)||(b==g)||(b==h))
 printf("vowel");
 else
 printf("consonant");
 getch();
}
