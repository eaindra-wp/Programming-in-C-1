/*
    JTSK-320111
    a3_p8.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    int n, i;
    scanf("%d", &n);
    i = 1;
    if (ch <= '`' || ch >= '{')
    {
        return 1;
    }
    /*
        this condition is to return 1 if other characters,
        except small case letters, are typed in.
    */
    else if (n <=6 || n >=33)
    {
        return 1;
    }
    /*
        this condition is to return 1 if the numbers less than 7
        or greater than 32 are typed in.
    */
    else
    {
        while (i<n)
        {
            printf("%c,", ch-i);
            i++;
        }
        /*
            This is to print the input character and its preceding characters.
        */
        printf("%c", ch-n);
        /*
            This line is to print the last character, which will be ch-n.
            This line is added to remove "," after the last character.
        */
    }
    return 0;
}

