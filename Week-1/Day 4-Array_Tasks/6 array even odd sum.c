/*
6. Write a program in C to separate odd and even integers in separate arrays. Print the array with odd and even sum.
Input_1:
5
1 2 3 4 5

Output_1: 
2 4
6
1 3 5
9
*/


#include<stdio.h>
int main()
{
    int arr[20],n,i;
    while(scanf("%d",&n)==1)
    {
        int even_arr[20],odd_arr[20],j=0,k=0,even=0,odd=0;

        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);

        for(i=0; i<n; i++)
        {
            if(arr[i]%2 == 0)
            {
                even_arr[j]=arr[i];
                j++;
                even=even+arr[i];

            }

            else
            {
                odd_arr[k]=arr[i];
                k++;
                odd= odd+arr[i];

            }

        }

        printf("Even number :");
        for(i=0; i<j; i++)
        {
            printf("%d ",even_arr[i]);

        }
        printf("\n");


        printf("Odd number :");
        for(i=0; i<k; i++)
        {
            printf("%d ",odd_arr[i]);
        }
        printf("\n");

        printf("even sum :%d\n",even);
        printf("odd sum :%d\n",odd);

    }


}

