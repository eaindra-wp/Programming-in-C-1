/*JTSK-320111
a1_p1.c
Wun Pyae, Eaindra
e.wunpyae@jacobs-university.de*/

#include <stdio.h>

int main() {
    double result; /*The result of our calculation */
    result = (3 + 1.0) / 5;
    printf("The value of 4/5 is %f\n", result);
    return 0;
}

/*The result is 0.80000.
The result should be written in a real number format the result of 4/5 is 0.8.
However, the numbers in the equation for the result are initially written in the integer format,
and we get zero (0) when we run the project.
So, we need to add ".0" to one of the numbers in the equation, so that the format of the equation and result will be changed to float.*/

