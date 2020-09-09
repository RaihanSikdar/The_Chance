/*
6. Write a C program to find the third maximum between four numbers.
Input_1:
4 5 6 7
Output_1:
5
*/

#include<stdio.h>
int main()
{
    int  m, n, o, p;
    while(scanf("%d%d%d%d",&m,&n,&o,&p)==4)

    {
         if(m>n && m<o && m<p)
    {
        printf("%d\n", m);
    }
      else  if(n>m && n<o && n<p)

    {
        printf("%d\n", n);
    }
      else  if(o>m && o<n && o<p)
    {
        printf("%d\n", o);
    }
    else
    {
       printf("%d\n", p);
    }

    }

}
