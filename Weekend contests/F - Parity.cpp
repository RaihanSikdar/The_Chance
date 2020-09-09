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
    int t,n,j,k;
  // freopen("input.txt","r",stdin);
    S(t);
    for(k=1;k<=t;k++)
    {
        int i=0, arr[10001],c=0;
        S(n);
        while(n>0)                         //converting decimal to binary
        {
            arr[i]= n%2;
            n=n/2;
            i++;
        }

       for (j = i - 1; j >= 0; j--)
                {
                    //cout<<arr[j];
                    if(arr[j]==1)
                        c++;
                }
                  //cout<<c<<endl;
    if(c%2==0)
                 printf("Case %d: even\n",k);
    else
           printf("Case %d: odd\n",k);
    }

}


