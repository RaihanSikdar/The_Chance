#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        int sum=1;
            for(i=n;i>=1; i--)
            {
                sum=sum*i;
            }
            printf("%d\n",sum);
    }
}

