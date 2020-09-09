/*
Problem 2: Write a program in C to separate the individual characters from a string.
Input_1:
abcde
Output_1:
a b c d e
*/

#include<stdio.h>

int main()
{
    char str[20];

    while(scanf("%s",&str)==1)
    {

        int i;
        for(i=0;str[i]!='\0';i++)
        {
        printf("%c ",str[i]);
        }

    printf("\n");

    }

}
