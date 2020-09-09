/*
1. Write a C program to find the maximum between two numbers.
Input_1:
10 20
Output_1:
20
*/

#include<stdio.h>

int main()
{
    int a,b,max;
    while(scanf("%d%d",&a,&b)==2)
    {
        max=(a>b)?a:b;
        printf("%d\n",max);
    }
    return 0;
}
