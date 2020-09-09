/*
Problem 4: Input a word and copy it in another string.
Input_2:
baba
Output_2:
baba

*/

#include<stdio.h>
#include <string.h>
int main()
{
    char st1[30],st2[30],i;
    while(scanf("%s",&st1)==1)
    {
        for(i=0;st1[i]!='\0';i++)
        {
            st2[i]=st1[i];
        }
       st2[i] = '\0';
       //strcpy(st2,st1);
        printf("%s\n",st2);
    }
}
