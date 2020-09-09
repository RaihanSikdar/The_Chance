/*
2. Input a value N and print N lines in following way.
if n= 4
4
*
**
***
****
*/

#include<stdio.h>
int main()
{
    int n,row,col;
    while(scanf("%d",&n)==1)
    {
        for(row=1;row<=n;row++)
        {
            for(col=1;col<=row;col++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}

