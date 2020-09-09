
#include<bits/stdc++.h>
using namespace std;

#define		nn              "\n"
#define 	S(a)            scanf("%d",&a)
#define 	SS(a,b)         scanf("%d %d",&a,&b)
#define 	SSS(a,b,c)      scanf("%d %d %d",&a,&b,&c)

int main()
{
    int a[101][101],i,j,n;
     freopen("input.txt","r",stdin);
    while(S(n)==1)
    {
        int i,m=n;
        int t=0,b=n-1,l=0,r=n-1,dir=0;
         for(int i=0;i<n;i++)
	      {
		        for(int j=0;j<n;j++)
		                {
			                 S(a[i][j]);
		                  }
	      }

    while(t<=b && l<=r)
    {
        if(dir==0)
        {
            for(i=l;i<=r;i++)
            {
                printf("%d ",a[t][i]);

            }
                t++;
        }

      else  if(dir==1)
        {
            for(i=t;i<=b;i++)
            {
                printf("%d ",a[i][r]);

            }
              r--;
        }

      else  if(dir==2)
        {
            for(i=r;i>=l;i--)
            {
                printf("%d ",a[b][i]);

            }
             b--;
        }

      else  if(dir==3)
        {
            for(i=b;i>=t;i--)
            {
                printf("%d ",a[i][l]);

            }
               l++;
        }
        dir=(dir+1)%4;

    }

    }

}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	 freopen("input.txt","r",stdin);
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int m=n;
	int r=0,c=0;
	while(r<=(n/2))
	{

	//for(int i=r;i<m;i++)
		//printf("%d ",a[r][i]);

		for(int i=c+1;i<m;i++)
		printf("%d ",a[i][m-1]);
/*
		for(int i=m-2;i>=r;i--)
		printf("%d ",a[m-1][i]);

		for(int i=m-2;i>r;i--)
		printf("%d ",a[i][c]);


		c++;
		m--;

		//r++;
	}
}
*/
