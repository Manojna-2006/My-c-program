#include<stdio.h>//c program to display numbers between x and y which are divisible by a and b
int main()
{ int x,y,a,b,i;
printf("enter x,y,a,b values");
scanf("%d%d%d%d",&x,&y,&a,&b);
for(i=x;i<=y;i++)
{
 if(i%a==0 && i%b==0)
 {
 printf("numbers are :%d\n",i);
 }
 }
return 0;
}