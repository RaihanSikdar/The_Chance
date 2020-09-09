#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        int sum=0,p=0;

            while (n!=0)
            {
                p=n%10;
                sum=sum+p;
                n=n/10;

            }
            printf("%d\n",sum);

    }
}







