/*
    JTSK-320111
    a1_p4.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int x= 17, y= 4;
    float division;

    printf("x=%d\ny=%d\n", x, y);

    int sum, product, difference, remainder_of_division;
    sum = x + y;
    printf("sum=%d\n", sum);

    product= x * y;
    printf("product=%d\n", product);

    difference= x - y;
    printf("difference=%d\n", difference);

    division= x * 1.0 / y;
    printf("division=%f\n", division);

    remainder_of_division= x % y;
    printf("remainder of division=%d\n", remainder_of_division);

    return 0;
}
