/*
    JTSK-320111
    a4_p7.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <stdio.h>
float product (float a, float b);
void productbyref (float a, float b, float *p);
void modifybyref (float *a, float *b);
int main()
{
    float A, B, P;
    scanf("%f", &A);
    scanf("%f", &B);

    float product_1 = product(A,B);
    printf("%.3f\n", product_1);
    /*
        The product function is called here to
        print the product of two inputs, A and B.
    */

    productbyref(A, B, &P);
    printf("%.3f\n", P);
    /*
        The modified by reference product function is called here to
        print the product of two inputs, A and B.
    */

    modifybyref (&A, &B);
    printf("%.3f, %.3f\n", A, B);
    /*
        a+3 and b+11 are printed here with a function of passing by reference.
    */

    return 0;
}
float product (float a, float b)
{
    float p = a * b;
    return p;
}
void productbyref (float a, float b, float *p)
{
    float i;
    i = a * b;
    *p = i;
    //Since p is a pointer, one more float variable is needed to point.
    return;
}
void modifybyref (float *a, float *b)
{
    *a = *a + 3.0;
    *b = *b + 11.0;
    //New numbers are added by adding pointer values with new numbers.
    return;
}
