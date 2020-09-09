/*
n = 5
* * * * *
 * * * *
  * * *
   * *
    *
*/

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("n = ");
    while(scanf("%d",&n)==1)
    {
        for (row=n;row>=1;row--)
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

