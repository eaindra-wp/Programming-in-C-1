/*JTSK-320111
a2_p1.c
Wun Pyae, Eaindra
e.wunpyae@jacobs-university.de*/

#include <stdio.h>

int main(){
    double a, b;
    scanf("%lf", &a);
    getchar();
    scanf("%lf", &b);
    getchar();
    printf("sum of doubles=%lf\n", a+b);
    printf("difference of doubles=%lf\n", a-b);
    printf("square=%lf\n", a*a);

    int c, d;
    scanf("%d", &c);
    getchar();
    scanf("%d", &d);
    getchar();
    printf("sum of integers=%d\n", c+d);
    printf("product of integers=%d\n", c*d);

    char e, f;
    scanf("%c", &e);
    getchar();
    scanf("%c", &f);
    getchar();
    printf("sum of chars=%d\n", e+f);
    printf("product of chars=%d\n", e*f);
    printf("sum of chars=%c\n", e+f);
    printf("product of chars=%c\n", e*f);

    return 0;
}
