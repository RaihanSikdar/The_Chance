/*
Problem 5: How to reverse a string without using any function.
quick
Output_2:
kciuq
*/
#include<stdio.h>
#include <string.h>
int main()
{
    char st[30],i,len=0;
    while(scanf("%s",&st)==1)
    {
        for(i=0;st[i]!='\0';i++)
        {
            len++;
        }

        for(i=len-1;i>=0;i--)
        {
             printf("%c",st[i]);
        }
        //strrev(st);
        //printf("%s\n",st);
    }
}

