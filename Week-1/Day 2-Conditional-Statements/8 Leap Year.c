/*
8. Write a C program to find whether a given year is a leap year or not.
Input_1:
2016
Output_1:
2016 is a leap year.
*/
#include<stdio.h>
int main()
{
    int year;
    while(scanf("%d",&year)==1)
    {
        if((year%4==0  &&  year%100!=0 ) || (year%400==.0))
            printf("%d is a leap year.\n",year);
        else
            printf("%d is not a leap year.\n",year);
    }
    return 0;
}
