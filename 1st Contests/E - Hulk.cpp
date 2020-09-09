#include<bits/stdc++.h>
using namespace std;

#define          S(a)                 scanf("%d",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          SSS(a,b,c)       scanf("%d%d %d",&a,&b,&c)


int main()
{
    int n,i;
    while(S(n)==1)
    {
       for (i=1;i<n;i++)
       {
           if(i%2==0)
                  printf("I love that ");
           else
                 printf("I hate that ");
       }

       if(n%2==0)
               printf("I love it \n");
       else
              printf("I hate it \n");


    }
}



