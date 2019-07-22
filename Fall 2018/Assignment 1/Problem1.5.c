/*
    JTSK-320111
    a1_p5.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int x= 2138;
    printf("x=%9d\n", x);
    /*Prints the value of x over 9 places*/

    float y= -52.358925;
    printf("y=%11.5f\n", y);
    /*Prints the value of y over 11 places with a floating point precision of 5*/

    char z= 'G';
    printf("z=%c\n", z);

    double u= 61.295339687;
    printf("u=%.7lf\n", u);
    /*Prints the value of u with a floating point precision of 7*/


    return 0;
}
