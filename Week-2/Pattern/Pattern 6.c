/*
n = 5
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("n = ");
    while(scanf("%d",&n)==1)
    {
        for(row=1;row<=n;row++)
        {
            for(col=1;col<=row;col++)
            {

                printf("%d ",col%2);

            }
            printf("\n");
        }
    }
}

