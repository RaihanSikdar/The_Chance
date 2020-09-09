#include<bits/stdc++.h>
using namespace std;

#define          S(a)                 scanf("%d",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          SSS(a,b,c)       scanf("%d%d %d",&a,&b,&c)


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        SS(a,b);
        if(a>b)
              puts(">");
        else if(a<b)
                 puts("<");
        else
              puts("=");
    }
}




