/*
5. Write a program in C to merge two arrays.
Input:
5
1 2 3 4 5
4
6 7 8 9
Output:
1 2 3 4 5 6 7 8 9

*/
#include<stdio.h>
int main()
{
    int arr1[20],arr2[20],n,m,i,k,merge[50];
    scanf("%d",&n);

         for(i=0;i<n;i++)
         {
              scanf("%d",&arr1[i]);
              merge[i]=arr1[i];

         }
         k=i;
         //printf("%d \n",k);
        scanf("%d",&m);

            for(i=0;i<m;i++)
            {
                scanf("%d",&arr2[i]);
                merge[k]=arr2[i];
                k++;

            }
         // printf("%d \n",k);
          for(i=0;i<k;i++)
         {
              printf("%d ",merge[i]);
         }

        printf("\n");



}

