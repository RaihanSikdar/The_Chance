/*
n = 4
   *
  * *
 * * *
* * * *
 * * *
  * *
   *
Diamond Shape
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
                printf(" ");
            }
            for(col=1;col<=row;col++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for(row=n-1;row>=1;row--)
        {
            for(col=1;col<=n-row;col++)
            {
                printf(" ");
            }
             for(col=1;col<=row;col++)
             {
                 printf("* ");
             }
             printf("\n");
        }
    }
}

