#include<stdio.h>
#include<math.h>


int main()
{
    int a,b,c;
    double area,s;

    while( scanf("%d %d %d",&a,&b,&c) ==3)
    {
        s=(a+b+c)/2.0;

        area= sqrt( s*(s-a)*(s-b)*(s-c) );

        printf("%.3lf\n",area);
    }

    return 0;

}
