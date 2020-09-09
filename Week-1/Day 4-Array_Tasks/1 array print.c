/*
1. Take an input N. In the next line input N integers. Print this N integers in separate lines.
5
1 2 3 4 5
and output will be
1 2 3 4 5
*/
#include<stdio.h>
int main()
{
    int arr[20],n,i;
    while(scanf("%d",&n)==1)
    {
         for(i=0;i<n;i++)
                scanf("%d",&arr[i]);

            for(i=0;i<n;i++)
                  printf("%d ",arr[i]);

        printf("\n");
    }


}
