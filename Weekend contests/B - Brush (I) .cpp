#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

#define          S(a)            scanf("%d",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          Sc(a)            scanf("%s",&a)
#define          SSc(a,b)            scanf("%s %s",&a,&b)


int main()
{
    int t;
    //freopen("input.txt","r",stdin);
    S(t);
    for(int k = 1; k <= t; k++)
    {

        int n,c=0,sum=0;
        S(n);
        while(n--)
        {
            int a;
            S(a);
            if(a>=0)
                sum=sum+a;
        }
        printf("Case %d: %d\n",k,sum);
    }
}

