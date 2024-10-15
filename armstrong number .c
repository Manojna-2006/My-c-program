#include<stdio.h>//c program to find a number is aarmstrong or not
int main() {

    int n,arm=0,c, r;
    printf("enter n value");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm=arm+r*r*r;
        n=n/10;
    }
    if(arm==c)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
    return 0;
}