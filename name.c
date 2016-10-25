#include<stdio.h>
#include<conio.h>
void main()
{
char title[20],name[20];
clrscr();
printf("Enter the title:");
gets(title);
printf("Enter the name");
gets(name);
printf("\n The title and name is:%s,%c",title,*name);
getch();
}
