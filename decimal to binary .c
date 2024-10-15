#include<stdio.h>//c program on decimal to binary
int main()
{   int n,binary=0,rem=0,place =1;
    printf("enter a decimal number");
    scanf("%d",&n);
    printf("\nbinaryequivalentof %d is:",n);
    while(n)
    {
        rem=n%2;
        n=n/2;
        binary=binary+(rem*place);
        place=place*10;
    }
    printf("%d",binary);
return 0;

}
