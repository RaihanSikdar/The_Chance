#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        i=n;
        while(i>=1)
        {
            printf("%d ",i);
            i--;
        }
         printf("\n");
    }
    return 0;
}

