#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        int sum=1;
        i=n;
            while(i>=1 )
            {
                sum=sum*i;
                i--;
            }
            printf("%d\n",sum);
    }
}


