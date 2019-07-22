/*
    JTSK-320111
    a5_p5.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int count_consonants(char str[]);
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
        //sscanf(set, "%[^\r]%*c", &set);
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
    char *counter;
    counter = str;
    //The loop will work until the last character in the array is found.
    for (count = 0; count < strlen(str); count++)
    {
    while (*counter != '\n')
    {
        if ( (*counter >= 'a' && *counter <= 'z')
                || (*counter>= 'A' && *counter <= 'Z'))

        //We will have to check whether the characters are alphabets or not.
        {
            if (*counter != 'a' && *counter != 'e' && *counter != 'i'
                    && *counter != 'o' && *counter != 'u' && *counter != 'A'
                    && *counter != 'E' && *counter != 'I' && *counter != 'O'
                    && *counter != 'U')
            /*
                If the character is not a vowel, the counter number will be incremented,
                and the number of consonants will be noted and printed.
            */

            {
                counter++;
            }
        }
    }
    }
    printf("Number of consonants=%d\n", count);
    return ;
}

