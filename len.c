#include<stdio.h>
#include<conio.h>
void main()
{
char str[10][25];
int i,n,len,leng[25];
clrscr();
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++) {
scanf("%s",&str[i]);
printf("Enter the length:");
scanf("%d",&len);
for(i=0;i<4;i++) {
leng[i]=strlen(str[i]);
if(leng[i]==len) 
printf("%s",str[i]);
}
getch();
}
