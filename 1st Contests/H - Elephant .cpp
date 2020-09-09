#include<bits/stdc++.h>
using namespace std;

#define          S(a)                 scanf("%d",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          SSS(a,b,c)       scanf("%d%d %d",&a,&b,&c)


int main()
{
    int x,n=0;
    while(S(x)==1)
    {
         n=x/5;

         if( x==n*5)
            printf("%d\n",n);
         else
             printf("%d\n",n+1);


    }
}




