#include<bits/stdc++.h>
using namespace std;

#define		nn              "\n"
#define 	S(a)            scanf("%d",&a)
#define 	SS(a,b)         scanf("%d %d",&a,&b)
#define 	SSS(a,b,c)      scanf("%d %d %d",&a,&b,&c)

int main()
{
    int a[100][100],n,i,j;
    while(S(n)==1)
    {
        for (i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                   a[i][0] = 1;
                   a[0][j] = 1;

            }
        }
        for (i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                   a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }

         printf("%d\n",a[n-1][n-1]);

    }
}

