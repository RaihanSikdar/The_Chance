#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        int sum=1;
            for(i=1;i<=10; i++)
            {
                sum=n*i;
                printf("%d X %d = %d\n",n,i,sum);
            }

    }
}





