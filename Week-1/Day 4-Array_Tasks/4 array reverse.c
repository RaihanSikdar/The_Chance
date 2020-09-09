/*
4. Given a list of numbers. Save the numbers in an Array. Finally, reverse the array elements and output in a line separated by space.
Input_1:
10
1 2 3 4 5 6 7 8 9 10

Output_1: 
10 9 8 7 6 5 4 3 2 1

*/

#include<stdio.h>
int main()
{
    int arr[30],n,i;
    while(scanf("%d",&n)==1)
    {

        for(i=1; i<=n; i++)
            scanf("%d",&arr[i]);

        for(i=n; i>0; i--)
        {
            printf("%d ",arr[i]);
        }

      printf("\n");
    }


}




