/*
    JTSK-320111
    a3_p7.c
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
    i = 0;
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
    return 0;
}
