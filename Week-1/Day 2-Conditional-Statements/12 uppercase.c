/*
12. Given a character C. Determine the character is an uppercase alphabet or lowercase alphabet or a digit.
Input_1:
k
Output_1:
'k' is lowercase alphabet.
*/

#include<stdio.h>

int main()
{
    char ch;

    while(scanf("%s", &ch)==1)

    {
         if(ch>= '0' && ch <= '9')
    {
        printf("%s is a digit.\n", &ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%s is  uppercase alphabet.\n", &ch);
    }
    else if(ch >='a' && ch <= 'z')
    {
        printf("%s is lowercase alphabet.\n", &ch);
    }
    else
    {
        printf("%s is not an alphabet.\n", &ch);
    }

    }



    return 0;
}

