#include<bits/stdc++.h>
using namespace std;

#define          S(a)                 scanf("%d",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          SSS(a,b,c)       scanf("%d%d %d",&a,&b,&c)


int main()
{
    int k,n,w,i;
    while(SSS(k,n,w)==3)
    {
        int sum=0;
     for(i=1;i<=w;i++)
     {
         sum=sum+i*k;
     }
     if(sum>n)
     {
         printf("%d\n",sum-n);
     }
     else
         printf("0\n");
    }
}

