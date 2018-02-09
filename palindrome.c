#include<stdio.h>
#include<conio.h>
void main ()
{
  int a, b, c = 0, r;
  clrscr ();
  printf ("enter the number");
  scanf ("%d", &a);
  b == a;
  while (a != 0)
    {
      r = a % 10;
      c = c * 10 + r;
      a = a / 10;
    }
  if (c == b)
    printf ("Yes");
  else
    printf ("No");
  getch ();
}

