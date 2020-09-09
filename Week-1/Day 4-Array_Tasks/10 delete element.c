/*
10. Given an array. Remove a specific index element and reorder the array again.
input:
6 > Size of the array
1 2 3 4 5 6  > elements of array
4 > the index you have to delete

Output:
1 2 3 4 6

*/

#include<stdio.h>
int main()
{
    int arr[20],n,i;
    while(scanf("%d",&n)==1)
    {
         for(i=0;i<n;i++)
                scanf("%d",&arr[i]);

        int pos;
        scanf("%d",&pos);

        if(pos<=n+1)
        {
            for (i= pos;i<n-1;i++)
                arr[i]=arr[i+1];

             for(i=0;i<n-1;i++)
                printf("%d ",arr[i]);

        }

        printf("\n");
    }


}
