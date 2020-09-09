/*
3. Input a value N and print N lines in following way.
Example: If N=4 then,
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
            for(col=1;col<=n-row;col++)
            {
                printf(" ");
            }

            for(col=1;col<=row;col++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
