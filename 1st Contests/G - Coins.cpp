#include<bits/stdc++.h>
using namespace std;

#define          S(a)                 scanf("%d",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          SSS(a,b,c)       scanf("%d%d %d",&a,&b,&c)


int main()
{
    int n,s;
    while(SS(n,s)==2)
    {
       int r;
       r=s/n;
       if(s==r*n)
          printf("%d\n",r);
       else
           printf("%d\n",r+1);


    }
}




