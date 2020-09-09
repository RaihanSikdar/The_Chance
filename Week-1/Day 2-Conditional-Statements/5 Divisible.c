/*
5. Given two numbers N and X. Find N is divisible by X or not.
Input_1:
10 5
Output_1:
YES
*/
#include<stdio.h>
int  main()
{
    int n,x;
    while(scanf("%d%d",&n,&x) ==2)
    {
        if(n%x==0)
            puts("YES");

        else puts("NO");
    }
    return 0;
}
