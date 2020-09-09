#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        int sum=0;
        for(i=1; i<=n; i++)
        {
            if(i%2 !=0)
            {
                sum = sum+ i;
            }

        }
        printf("%d\n",sum);
    }
}

