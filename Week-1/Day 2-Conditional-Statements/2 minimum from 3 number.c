/*
2. Write a C program to find a minimum between three numbers.
Input_1:
1 6 2
Output_1:
1
*/

#include<stdio.h>

int main()
{
    int a,b,c,min;
    while(scanf("%d%d %d",&a,&b,&c)==3)
    {
        min = (a<b && a<c) ? a : (b<c)? b  : c ;
        printf("%d\n",min);
    }
    return 0;
}

