#include<stdio.h>//c program to find a number palindrome or not
int main() {
    int n,r,sum=0,temp;//temporary variable
    printf("enter n value");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {   r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not a palindrome number");
    }
    return 0;
}