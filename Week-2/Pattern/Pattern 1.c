/*
n = 4
* * * *
* * * *
* * * *
* * * *

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
            for(col=1;col<=n;col++)
            {
                printf("* ");

            }
            printf("\n");
        }
    }
}
