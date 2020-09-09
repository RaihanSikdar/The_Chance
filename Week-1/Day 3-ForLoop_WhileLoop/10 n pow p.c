#include<stdio.h>
int main()
{
    int n,p,i;
    while(scanf("%d%d",&n,&p)==2)
    {
        int sum=1;
        i=1;
            while(i<=p)
            {
                sum=sum*n;
                i++;
            }
            printf("%d\n",sum);
    }
}

