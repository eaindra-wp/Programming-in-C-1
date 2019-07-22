/*
    JTSK-320111
    a5_p4.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int count_consonants(char str[]);
int i = 0;
int main()
{
    char set[100];
    /*
        while the program is still working and true,
        we can type as many strings as we want.
    */

    while(1)
    {
        fgets(set, sizeof(set), stdin);
        //if the first character is '\n', the program will stop working.
        if (set[0] == '\n')
        {
            break;
        }
        count_consonants(set);
    }
}
int count_consonants(char str[])
{
    int count = 0;
    //The loop will work until the last character in the array is found.
    for (i = 0; i < strlen(str); i++)
    {
        if ( (str[i] >= 'a' && str[i] <= 'z')
                || (str[i] >= 'A' && str[i] <= 'Z'))

        //We will have to check whether the characters are alphabets or not.
        {
            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i'
                    && str[i] != 'o' && str[i] != 'u' && str[i] != 'A'
                    && str[i] != 'E' && str[i] != 'I' && str[i] != 'O'
                    && str[i] != 'U')
            /*
                If the character is not a vowel, the counter number will be incremented,
                and the number of consonants will be noted and printed.
            */

            {
                count++;
            }
        }
    }
    printf("Number of consonants=%d\n", count);
    return 0;
}
