/*
4. Write a C program to check whether a given integer is odd or even.
Input_5:
8881
Output_5:
8881 is an odd integer
*/
#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n%2==0)
             printf("%d is an even integer\n",n);
        else
             printf("%d is an odd integer\n",n);
    }
    return 0;
}
