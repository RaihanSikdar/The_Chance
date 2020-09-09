/*
Problem 1: Input a word and count its length without using built-in library.
Input_1:
abcde
Output_1:
5
*/
#include<stdio.h>

int main()
{
    char st[20];

    while(scanf("%s",st)==1)
    {
        int i,count=0;
        for(i=0; st[i]!='\0'; i++)
        {
            count++;
        }
      printf("%d\n",count);
        //int d= strlen(st);
       // printf("%d\n",d);
    }




}
