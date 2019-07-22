/*
    JTSK-320111
    a1_p3.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5;
    result = a / b;
    printf("The result is %f\n", result);
    return 0;
}

/*
    The real result is 0.370370.
    The problem is that the # is missing before "include" comes in the very first line.
    So, I added the # before "include" comes.
    Also, the data type for "b" is declared as integer, but "13.5" is not an integer.
    So, I had to change the data type of b to "float" to get the result in the float data type.
*/

