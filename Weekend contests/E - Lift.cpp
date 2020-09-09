#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>

using namespace std;

#define          S(a)            scanf("%d",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          Sc(a)            scanf("%s",&a)
#define          SSc(a,b)            scanf("%s %s",&a,&b)


int main()
{
      int t,Count=0;
      S(t);
      while(t--)
      {
          int m,lf,dif,tm,o=3,c=3,inout=5;
          SS(m,lf);
          dif = abs(lf-m);
          tm=(dif*4) + (m*4) + (2*o) +c+(2*5);
          printf("Case %d: %d\n",++Count,tm);

      }

}


