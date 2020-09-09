#include<bits/stdc++.h>
using namespace std;

#define          S(a)                 scanf("%d",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          SSS(a,b,c)       scanf("%d%d %d",&a,&b,&c)


int main()
{
    int a[1000],n,i;
    while(S(n)==1)
    {
        int c=0;
     for(i=1;i<=n;i++)
     {
         scanf("%d",&a[i]);
         if(a[i]==1)
              c++;
     }

    if(c!=0)
    {
        puts("HARD");
    }
   else
        puts("EASY");

    }
}


