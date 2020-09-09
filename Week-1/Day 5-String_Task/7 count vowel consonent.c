/*
Problem 7: Input a string and print how many vowels and consonants are there.
Input:
pangram
Vowels : 2
Consonets : 6
*/

#include<stdio.h>
#include <string.h>
int main()
{
    char st[30],st2[30],i;
    while(scanf("%s",&st)==1)
    {
        int v=0,c=0;
        for(i=0;st[i]!='\0';i++)
        {
            if(st[i]=='a' || st[i]=='e' || st[i]=='i'|| st[i]=='o'|| st[i] =='u'|| st[i]=='A' || st[i]=='E' || st[i]=='I'|| st[i]=='O'|| st[i]=='U' )

                      v++;


            else
                         c++;
        }

              printf("Vowel : %d\n",v);
             printf("Consonent : %d\n",c);


    }
}


