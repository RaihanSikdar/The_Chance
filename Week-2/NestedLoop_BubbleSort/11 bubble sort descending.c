/*
11. Given an array. Sort this array in descending order using bubble sort.
5
1 2 3 4 5
Output_1:
5 4 3 2 1
*/
#include<stdio.h>
int main()
{
    int a[30], n,i,j;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        int temp=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }

         for(i=1;i<=n;i++)
        {
            printf("%d ",a[i]);
        }

    }
}
