/*
n = 5
A
B B
C C C
D D D D
E E E E E

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
            for(col=1;col<=row;col++)
            {
                printf("%c ",row+64);
            }
            printf("\n");
        }
    }
}

