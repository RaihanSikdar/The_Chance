#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        int sum=1;
        i=1;
            while (i<=10)
            {
                sum=n*i;
                printf("%d X %d = %d\n",n,i,sum);
                i++;
            }

    }
}






