#include<stdio.h>//c program to check whether a number is prime or not
int main()
{ int n,i,count=0;
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ 
  if(n%i==0)
  { 
    count++;
    }}
 if(count==2){
 printf("%d is a prime number",n);}
 else{
  printf("%d is not a prime number",n);}
  return 0;
 }