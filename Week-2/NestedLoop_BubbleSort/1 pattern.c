/*
1.Input N and M. Print N lines where every line contains M stars.
Example: If N=3 and M=5 then,
3 5
*****
*****
*****
*/

#include<stdio.h>
int main()
{
    int n,m,row,col;
    while(scanf("%d %d",&n,&m)==2)
    {
        for(row=1;row<=n;row++)
        {
            for(col=1;col<=m;col++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
