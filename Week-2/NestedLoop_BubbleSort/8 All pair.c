/*
8. Given an array, Find all possible pairs.
3
1 2 3
Output_1:
1 1, 1 2, 1 3, 2 1, 2 2, 2 3, 3 1, 3 2, 3 3,
*/
#include<stdio.h>
int main()
{
    int a[20],n,i,j;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
             scanf("%d",&a[i]);
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("%d %d,",a[i],a[j]);
            }
        }
    }
}
