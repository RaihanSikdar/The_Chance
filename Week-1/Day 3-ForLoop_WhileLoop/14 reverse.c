#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
  int c=0,p=0;
            while (n!=0)
            {
                p=n%10;
                c=c*10+p;
                n=n/10;


            }

                   printf("%d\n",c);
    }
}








