/*
    JTSK-320111
    a4_p2.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <stdio.h>
float convert (int cm)
{
    float km;
    km = cm / 100000.0;
    //formula for the conversion from cm to km
    return km;
}
int main()
{
    int cm;
    scanf("%d", &cm);
    printf("Result of conversion: %f\n", convert(cm));
    return 0;
}
/*
    The formula for the conversion from cm to km is written under the convert function.
    Then, I called the convert function in the printf function under the main function
    to convert the value I received from the keyboard input.
*/

