/*
13. Given an array of distinct integers, sort the array and find all pairs where a<b.
3
1 2 3
Output_1:
1 2, 1 3, 2 3,
*/

#include<stdio.h>
int main()
{
    int a[20],n,i,j;
    while(scanf("%d",&n)==1)
    {
        int temp =0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[i]<a[j])
                {
                     temp= a[i];
                     a[i] =a[j];
                     a[j] =temp;
                }

            }
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[i]<a[j])
                {
                     printf("%d %d,",a[i], a[j]);
                }

            }
        }
        printf("\n");
    }
}
