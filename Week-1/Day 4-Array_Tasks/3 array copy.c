/*
3. Write a program to copy an array into another array and print both array. (the size of the array should be taken from keyboard).
Input:
5 
1 2 3 4 5
Output:
1 2 3 4 5
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
    int arr1[30],arr2[30],n,i;
    while(scanf("%d",&n)==1)
    {

        for(i=0; i<n; i++)
            scanf("%d",&arr1[i]);

        for(i=0; i<n; i++)
        {
            arr2[i]=arr1[i];
        }


        printf("Source to Copy\n");
        for(i=0; i<n; i++)
        {
            printf("%3d %9d\n",arr1[i],arr2[i]);

        }



        //printf("\n");
    }


}
