#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

#define          S(a)            scanf("%d",&a)
#define          SS(a,b)            scanf("%d %d",&a,&b)
#define          SSS(a,b,c)            scanf("%d %d %d",&a,&b,&c)
#define          Sc(a)            scanf("%s",&a)
#define          SSc(a,b)            scanf("%s %s",&a,&b)



int main()
{
    int t,i,c=0;
    //freopen("input.txt","r",stdin);
    S(t);
    while(t--)
    {
        int arr[1001];
        for(i=0;i<3;i++)
        {
            S(arr[i]);

        }
     sort(arr,arr+3);
     if((arr[0]*arr[0])+(arr[1]*arr[1])== arr[2]*arr[2])
                     printf("Case %d: yes\n",++c);

     else
                   printf("Case %d: no\n",++c);

    }
}


