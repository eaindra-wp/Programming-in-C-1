/*
    JTSK-320111
    a4_p1.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
int position(char str[], char c)
{
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
    {

    }
    return idx;
}
int main()
{
    char line[80];
    while (1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
}
/*
    The {} bracket is added under the for function.
    "return idx;" is initially noticed as the process to be done after the for loop.
    Actually, it is not; there will be nothing to do after the looping.
*/

