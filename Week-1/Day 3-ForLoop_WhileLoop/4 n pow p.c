#include<stdio.h>
int main()
{
    int n,p,i;
    while(scanf("%d%d",&n,&p)==2)
    {
        int sum=1;
            for(i=1;i<=p; i++)
            {
                sum=sum*n;
            }
            printf("%d\n",sum);
    }
}
