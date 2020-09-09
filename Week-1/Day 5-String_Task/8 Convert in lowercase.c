/*
Problem 8: Input a string that will contain only uppercase letters. Convert these letters in lowercase.
Input_1:
BUBT
Output_1:
bubt
*/


#include<stdio.h>
#include <string.h>
int main()
{
    char st[30],i;
    while(scanf("%s",&st)==1)
    {
        for(i=0;st[i]!='\0';i++)
        {
            st[i] +=32;
        }
        printf("%s",st);

    }

}




