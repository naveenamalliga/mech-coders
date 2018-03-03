#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[30]={"mech"},b[30]={"cse"};
 int e,g,h,z,y,i,p;
 char n[30],m[30],o[30],u[30];
 char f[30];
 clrscr();
 printf("enter 1 to view book details");
 printf("\nenter 2 to add books");
 scanf("%d",&e);
 if(e==1)
 {
     printf("enter the branch cse or mech");
     scanf("%s",f);
     h=strcmp(a,f);
     if(h==0)
     {
         printf("avallable books:\nSOM\nDTS\nFEA");
         printf("\nenter 1 for SOM");
         printf("\nenter 2 for DTS");
         printf("\nenter 3 for FEA");
         scanf("%d",&g);
         if(g==1)
         {
             z=1;
         }
         else if(g==2)
         {
             z=2;
         }
         else
         {
             z=3;
         }
         switch(z)
         {
             case 1:
             printf("\nBook name: Strength of materials");
             printf("\nAuther name: Malliga");
             printf("\nEdition: 3 edition");
             printf("\nNo.of available books=10");
             case 2:
             printf("\nBook name: Design of transmission elements");
             printf("\nAuther name: Naveena");
             printf("\nEdition: 12 edition");
             printf("\nNo.of available books=7");
             case 3:
             printf("\nBook name: Finite element analysis");
             printf("\nAuther name: Kabi");
             printf("\nEdition: 2 edition");
             printf("\nNo.of available books=17");
         }
         
     }
     else
     {
         printf("avallable books:\nDS\nSE\nAI");
         printf("\nenter 1 for DS");
         printf("\nenter 2 for SE");
         printf("\nenter 3 for AI");
         scanf("%d",&g);
         if(g==1)
         {
             z=1;
         }
         else if(g==2)
         {
             z=2;
         }
         else
         {
             z=3;
         }
         switch(z)
         {
             case 1:
             printf("\nBook name: Data structure");
             printf("\nAuther name: Priya");
             printf("\nEdition: 5 edition");
             printf("\nNo.of available books=3");
             case 2:
             printf("\nBook name: Software engineering");
             printf("\nAuther name: Parivarthini");
             printf("\nEdition: 8 edition");
             printf("\nNo.of available books=13");
             case 3:
             printf("\nBook name: Artificial intelligence");
             printf("\nAuther name: sumi");
             printf("\nEdition: 12 edition");
             printf("\nNo.of available books=9");
         }     
     }
 }
 else
 {
     printf("enter the no of book details you are adding");
     scanf("%d",&y);
     for(i=0;i<y;i++)
     {
         printf("\nenter Branch name: ");
         scanf("%s",&u[i]);
         printf("\nenter Book name: ");
         scanf("%s",&n[i]);
         printf("\nEnter Auther name:");
         scanf("%s",&m[i]);
         printf("\nEnter Edition:");
         scanf("%s",&o[i]);
         printf("\n Enter theNo.of available books=");
         scanf("%d",&p);
     }
 }
}
