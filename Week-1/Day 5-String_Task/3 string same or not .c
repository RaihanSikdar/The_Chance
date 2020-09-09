/*
Problem 3: Input two words and check both words are the same or not.
Input_1:
abcde
uvxyz
Output_1:
No
*/
#include<stdio.h>

int main()
{
    char st1[20],st2[20];

    while(scanf("%s %s",&st1,&st2)==2)
    {
        if (!(strcmp(st1, st2)))
            printf("Yes\n");
        else
            printf("No\n");



    }

}

