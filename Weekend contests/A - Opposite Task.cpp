#include<iostream>
#include<stdio.h>
using namespace std;

#define        S(a)            scanf("%d",&a)
#define        SS(a,b)            scanf("%d %d",&a,&b)


void result(int n)
{
    int c1=0,c2=0;

        if(n >10)
           {
               c1=n-10;

           }
               c2=n-c1;
            printf("%d %d\n",c1,c2);
}

int main()

{
    int n,t;
    S(t);
    while(t--)
    {
           S(n);
        result(n);
    }
}
