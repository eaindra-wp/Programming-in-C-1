/*
    JTSK-320111
    a3_p1.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>

int main ()
{
    int i = 8;
    while (i >= 4)
    {
        printf("i is %d\n", i);
        i--;
    }
    printf("That's it.\n");
    return 0;
}
/*
    To fix the problem, I had to add the {} bracket stated under the while condition.
    Two lines 'printf("i is %d\n", i);' and 'i--;' are placed in the comment.
*/
