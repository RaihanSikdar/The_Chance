/*
13. Write a program to find the frequency of number X from the given array.
10
1 2 5 48 9 4 2 5 4 2
2

So frequency(Number of occurrence) of 2 is 3
so the output will be 3
*/

#include<stdio.h>
int main()
{
    int arr[20],n,i;
    while(scanf("%d",&n)==1)
    {
         for(i=0;i<n;i++)
                scanf("%d",&arr[i]);

        int num,count=0;
        //printf("search number:");
        scanf("%d",&num);

        for(i=0;i<n;i++)
        {
            if(num==arr[i])
                count++;
        }
        printf("%d",count);


        printf("\n");
    }


}

