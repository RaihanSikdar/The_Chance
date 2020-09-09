/*
8. Write a program in C to find the maximum and minimum elements in an array.
Input:
6
1 2 3 4 5 6

Output: 
6
1
*/
#include<stdio.h>
int main()
{
    int arr[20],n,i;
    while(scanf("%d",&n)==1)
    {

         for(i=0;i<n;i++)
                scanf("%d",&arr[i]);

        int max=arr[0];
        int min =arr[0];

        for (i=0;i<n;i++)
        {
            if(max<arr[i])
                max=arr[i];

            else if(min>arr[i])
                 min=arr[i];
        }

         printf("%d\n",max);
          printf("%d\n",min);
        printf("\n");
    }


}
