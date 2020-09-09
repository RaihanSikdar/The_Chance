/*
10. Given an array and value X. Find if it possible two make summation of two elements of that array equal to X.
 If possible print those two element otherwise print -1.
5 9
1 2 3 4 5
Output_1:
4 5,
*/
#include<stdio.h>
int main()
{
    int arr[50],n,x,i,j;
    while(scanf("%d %d",&n,&x)==2)
    {
        int r=0,count=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
        }

        for(i=1; i<=n-1; i++)
        {

            for(j=i+1; j<=n; j++)
            {
                 if( arr[i]+arr[j] == x)
                    {
                         printf("%d %d, \n",arr[i],arr[j]);
                          count=1;
                     }

             }

        }

        if (count==0)
            printf("-1\n");
    }
}
