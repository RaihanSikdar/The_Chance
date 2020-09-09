/*
2. Input N integers. Determine the average. Print the average with two digit after the decimal point.
5
1 2 3 4 5
and Output:
3.00
*/

#include<stdio.h>
int main()
{
    int arr[30],n,i;
    while(scanf("%d",&n)==1)
    {
        int sum=0;
        double avg = 0;

        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);

        for(i=0; i<n; i++)
        {
            sum = sum + arr[i];
        }

        avg = (double)sum/n;
        printf("%.2lf ",avg);
        printf("\n");
    }


}

