/*
    JTSK-320111
    a2_p4.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    float a, b, h;
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%f", &h);
    printf("square area=%f\n", a*a);
    printf("rectangle area=%f\n", a*b);
    printf("triangle area=%f\n", a*h/2);
    printf("trapezoid area=%f\n", (a+b)/2*h);

    return 0;
}
