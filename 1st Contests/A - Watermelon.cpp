#include<bits/stdc++.h>
using namespace std;

#define          S(a)            scanf("%d",&a)


int main()
{
    int n;
    while(S(n)==1)
    {
        if(n>2 && n%2==0)
            puts("YES");

        else
        puts("NO");
    }
}
