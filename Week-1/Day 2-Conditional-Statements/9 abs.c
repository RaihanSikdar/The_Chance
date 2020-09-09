/*
9. Find the absolute difference between the two numbers.

Input_1:
9 5
Output_1:
4
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,diff;
    while(scanf("%d%d",&a,&b)==2)
    {
        diff=abs(a-b);
        printf("%d\n",diff);
    }
    return 0;
}
