/*
9. Given two number X and N. Find the digit sum of all numbers between X to N where X<=N.
If X = 10 and N = 12 then,
Digit summation of 10 is 1.
Digit summation of 11 is 2.
Digit summation of 12 is 3.
Total digit summation of 10 to 12 is 6.
*/
#include<stdio.h>
int main()
{
    int x,n,i;
    while(scanf("%d%d",&x,&n)==2)
    {
        int sum=0,rem=0,t=0;
        for(i=x;i<=n;i++)
        {
            t=i;
            while(t!=0)
            {
                    rem    = t % 10;
                    sum   =sum + rem;
                    t       = t / 10;
            }

        }
        printf("%d\n",sum);

    }

}

