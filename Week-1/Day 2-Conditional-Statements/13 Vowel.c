/*
13. Given a character C. Determine the character is a vowel or consonant.

Input_5:
Y
Output_5:
Y is a consonant.
*/

#include <stdio.h>
int main()
{
    char C;
    scanf("%c", &C);

    if(C=='a' || C=='e' || C=='i' || C=='o' || C=='u' || C=='A' || C=='E' || C=='I' || C=='O' || C=='U')

    {
        printf("%c is Vowel.", C);
    }
    else
    {
        printf("%c is Consonant.", C);
    }

    return 0;
}
