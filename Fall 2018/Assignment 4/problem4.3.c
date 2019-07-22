/*
    JTSK-320111
    a4_p3.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>

float to_pounds(int kg, int g)
{
    float pound;
    pound = (kg * 2.2) + (g * 2.2 / 1000);
    //formula for the conversion from kg and g to pound
    return pound;
}
int main()
{
    int kg, g;
    scanf("%d", &kg);
    scanf("%d", &g);
    printf("Result of conversion: %lf\n", to_pounds(kg, g));
    return 0;
}
/*
    The formula for the conversion from kg and g to pounds is written
    under the to_pounds function.
    Then, I called the to_pounds function in the printf function under the main function
    to convert the value I received from the keyboard input.

*/

