/*
Problem 14: Write a program in C to find the maximum occurring character in a string.
Input_1:
seven
Output_1:
e
*/

#include<stdio.h>
#define ASCII_SIZE 256
int main()
{
    char st[30];
    while(scanf("%s",st)==1)
    {
        int i,len=0,count[ASCII_SIZE]={0};
        int max=0;char result;
        for(i=0;st[i]!='\0';i++)
        {
            len++;
        }

        for(i=0;i<len;i++)
        {
            count[st[i]]++;

            if(max<count[st[i]])
            {
                max=count[st[i]];
                result = st[i];
            }
        }
        printf("%c",result);
    }
}
