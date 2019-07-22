/*
    JTSK-320111
    a2_p6.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <stdio.h>
int main(){
    double x, y;
    printf("Please type two doubles:");
    scanf("%lf", &x);
    scanf("%lf", &y);

    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    printf("1. Address of 1st double=%p\n", ptr_one);
    printf("2. Address of 1st double=%p\n", ptr_two);
    printf("3. Address of 2nd double=%p\n", ptr_three);
    return 0;
}
