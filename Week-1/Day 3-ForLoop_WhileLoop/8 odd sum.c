#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        int sum=0;
        i=1;
        while (i<=n)
        {
            if(i%2 !=0)
            {
                sum = sum+ i;
            }

            i++;
        }
        printf("%d\n",sum);
    }
}


