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
 //   freopen("input.txt","r",stdin);
    S(t);
    for(int i = 1; i <= t; i++)
    {
        int n, k,sum=0;

        char st[50];
        S(n);
        printf("Case %d:\n",i);
        while(n--)
        {

            Sc(st);

            if(!strcmp(st,"donate"))
            {
                S(k);
                sum=sum+k;
            }

            else if(!strcmp(st,"report"))
            {

                printf("%d\n",sum);
            }

        }
    }
}
