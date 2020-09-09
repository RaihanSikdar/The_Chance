#include<bits/stdc++.h>
using namespace std;

#define          S(a)            scanf("%d",&a)
#define          SS(a,b)         scanf("%lld %lld",&a,&b)


int main()
{
    long long int h,n;
    while(SS(h,n)==2)
    {
        if(h>n)
            printf("%lld\n",h-n);
        else
             printf("%lld\n",n-h);
    }
}

