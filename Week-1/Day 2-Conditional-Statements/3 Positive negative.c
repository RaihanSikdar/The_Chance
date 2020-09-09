/*
3. Write a C program to check whether a number is negative, positive, or zero.
Input_1:
3
Output_1:
positive number.
*/

#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n<0)
            puts("negative number.");

        else if(n>0)
            puts("positive number.");

        else
            puts("0");
    }
    return 0;
}
