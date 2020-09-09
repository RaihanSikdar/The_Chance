#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
    while(1)
    {
        n++;
        if(n%3==0)
            break;
    }

  printf("%d\n",n);
    }
}

#include<stdio.h>

int main()
{
    int N,answer;
    scanf( "%d", &N );
    answer=N+(3-(N%3));
    printf( "%d\n", answer);
    return 0;
}






