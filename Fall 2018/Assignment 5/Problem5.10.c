/*
    JTSK-320111
    a5_p10.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void proddivpowinv(float a, float b, float *prod, float *div,
float *pwr, float *invb);
//prototype of the function
int main()
{
    float a, b, product, division, power, onebyb;
    a = 2.0;
    b = 5.0;
    proddivpowinv(a, b, &product, &division, &power, &onebyb);
    //calling the void function in the main function by reference
    printf("a=%f b=%f\nProduct= %f\nDivision= %f\na^b= %f\n1/b= %f",
    a, b, product, division, power, onebyb);
    //printing the result of the void function in the main function
    return 0;
}

void proddivpowinv(float a, float b, float *prod, float *div,
float *pwr, float *invb)
{
    *prod = a * b;
    *div = a / b;
    *pwr = pow (a, b);
    *invb = 1 / b;
    return;
    //returning the results in the void function
}
