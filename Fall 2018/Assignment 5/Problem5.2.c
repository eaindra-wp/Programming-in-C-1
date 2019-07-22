/*
    JTSK-320111
    a5_p2.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char c[50];
    fgets(c, sizeof(c) , stdin);
    int i = 0;
    while (c[i] != '\n')
    {
        if (i % 2 == 0)
        {
            printf("%c\n", c[i]);
        }
        else
        {
            printf(" %c\n", c[i]);
        }

        i++;
    }
    return 0;
    /*
        The loop will continue until the new line is detected,
        which means that until the '\n' is found.
        One space will be added in front of the characters located
        in the array blocks of odd numbers.
    */
}
