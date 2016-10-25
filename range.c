#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,n,b;
clrscr();
printf("Enter the range:");
scanf("%d %d",&a,&b);
printf("Enter the number:");
scanf("%d",&n);
if(n>=a&&n<=b)
{
printf("The valid input is:%d",n);
}
else
{
printf("The input is error ,please enter the valid input:%d",n);
}
getch();
}
