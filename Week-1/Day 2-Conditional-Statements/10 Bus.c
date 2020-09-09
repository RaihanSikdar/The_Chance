/*
10. A bus can carry maximum K person at a time. How many busses are needed to carry N person?
Input_1:
125 50
Output_1:
3

*/

#include <stdio.h>
#include <math.h>
int main()
{
    double k, n, bus;
   while( scanf("%lf %lf", &k, &n)==2)
   {
       bus = ceil(k / n);
    printf("%.lf\n", bus);

   }
return 0;

}

/*

#include<stdio.h>

int main()
{
    int k,n;
    scanf("%d%d",&n,&k);
    if(n%k==0)
    {
        printf("%d\n",n/k);
    }
    else
    {
        printf("%d\n",(n/k)+1);
    }

    return 0;
}
*/
