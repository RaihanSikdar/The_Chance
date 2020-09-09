#include<iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

#define PI 2*acos(0.0)

int main()
{
    int t,i;
    double area,r;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf", &r);
        area = ((r+r)*(r+r))-(PI*r*r);
        printf("Case %d: %.2lf\n",i,area);
    }
    return 0;
}

