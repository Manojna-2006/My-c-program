#include<stdio.h>//c program to calculate electricity bill
int main()
{   int unit;
    float total_amt;
    printf("enter total units consumed");
    scanf("%d",&unit);
    if(unit<=50)
    {
        total_amt=unit*0.50;
    }
    else if(unit<=150)
    {
        total_amt=25+((unit-50)*0.75);
    }
    else if(unit<=250)
    {
        total_amt=100+((unit-150)*1.20);
    }
    else {
        total_amt=220+((unit-250)*1.50);
    }
    printf("electricity bill =%f",total_amt);
    return 0;
}