#include<stdio.h>//c program to check whether a number is perfect number or not
int main() {
    int n,sum=0,i;
    printf("enter n value");
    scanf("%d",&n);
    for(i=1; i<n; i++)
    {   if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d is a perfect number",n);
    }
    else
    {   printf("%d is not a perfect number",n);
    }
    return 0;
}
