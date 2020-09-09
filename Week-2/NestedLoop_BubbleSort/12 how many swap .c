/*
12. Given an array of integers. Find the number of swaps to make the array sorted if we use bubble sort algorithm.
5
3 4 2 1 5
Output_1:
5

*/

#include<stdio.h>

int main()
{
    int a[200], n,i,j;
   while(scanf("%d",&n)==1)
   {

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    int temp=0, count=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

                count++;
            }
        }
    }

    printf("%d\n",count);
   }

}

