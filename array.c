#include<stdio.h>
#include<conio.h>
void main()
{
int arr[50],large,size,small;
clrscr();
printf("Enter the size of an array:");
scanf("%d",&size);
printf("Enter the %d elements in an array",size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);
large=a[0];
for(i=1;i<size;i++)
{
if(large<a[i])
large=a[i];
}
small=a[0];
for(i=1;i<size;i++)
{
if(small>a[i])
small=a[i];
}
getch();
}
