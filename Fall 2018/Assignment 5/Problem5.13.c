/*
    JTSK-320111
    a5_p13.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void uppcase(char *str);
void lowcase(char *str);
//prototypes of the function
int main()
{
    char set[90];
    //as long as the program is true, it will accept multiple strings
    while(1)
    {
        fgets(set, 90, stdin);
        //If the input is 'exit' or just a new line, the program will exit.
        if ((set[0] == 'e' && set[1] == 'x' && set[2] == 'i'
             && set[3] == 't') || set[0] == '\n')
        {
            break;
        }
        uppcase(set);
        lowcase(set);
        //calling the functions in the main function
    }
    return 0;
}
void uppcase(char *str)
{
    for (int i = 0; str[i] != '\n'; i++)
    {
        if (islower(str[i]))
        //If the character found is a lowercase, it will be changed to uppercase.
        {
            str[i] = toupper(str[i]);
        }
    }
    printf("uppcase=%s", str);
    //printing the uppercase result
    return;
}
void lowcase(char *str)
{
     for (int i = 0; str[i] != '\n'; i++)
    {
        //If the character found is uppercase, it will be changed to lowercase.
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }
    printf("lowcase=%s", str);
    //printing the lowercase result
    return;
}

