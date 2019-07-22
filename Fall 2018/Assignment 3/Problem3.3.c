/*
    JTSK-320111
    a3_p3.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <stdio.h>

int main () {
    char c;
    scanf("%c", &c);
    if (c>='0' && c<='9')
    {
        printf("%c is a digit\n", c);
    }
    /*
        If the input is between 0 and 9 (a digit),
        the line above will be shown.
    */
    else if ((c>='A' && c<='Z') || (c>='a' && c<='z'))
    {
        printf("%c is a letter\n", c);
    }
    /*
        If the input is between A and Z or a and z (a letter),
        the line above will be shown.
    */
    else
    {
        printf("%c is some other symbol\n", c);
    }
    /*
        If the input is a symbol (for example, !,$,+ and so on),
        the line above will be shown.
    */
    return 0;
}
