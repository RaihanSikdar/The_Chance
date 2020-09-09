/*
7. Write a program to find whether a number is there in an array or not.

5
1 2 3 4 5

search : 6
Output_2: 
The number is not in the array
*/

#include<stdio.h>
int main()
{
    int arr[20],n,i;
    while(scanf("%d",&n)==1)
    {
        int search;
         for(i=0;i<n;i++)
                scanf("%d",&arr[i]);

        //printf("searching number:");
        scanf("%d",&search);
        for(i=0;i<n;i++)
        {
            if(search==arr[i])
            {
                   puts("The number is in the array.");
                   break;
            }

        }

        if(i==n)

            {
                puts("The number is not in the array.");
            }
        printf("\n");
    }


}
