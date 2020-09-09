/*
n = 5
A A A A
B B B
C C
D


*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("n = ");
    while(scanf("%d",&n)==1)
    {
        for (row=1;row<=n;row++)
        {
            for(col=1;col<=n-row;col++)
            {
                printf("%c ",row+64);
            }
            printf("\n");
        }
    }
}


