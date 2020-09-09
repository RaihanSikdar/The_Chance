#include<stdio.h>
int main()
{
    int n,i,even,odd;
    while(scanf("%d",&n)==1)
    {
        even=0; odd=0;
        for(i=1;i<=n;i++)
        {
            if(i%2 == 0)
                even=even+i;

            else
                odd=odd+i;
        }
        printf("%d\n",odd-even);
    }
}
