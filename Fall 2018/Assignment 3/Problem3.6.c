/*
    JTSK-320111
    a3_p6.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    float x;
    scanf("%f", &x);
    int n;
    scanf("%d", &n);
    while(n <= 0)
    {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }
    //if the input is less than 1, the user will be asked to type again.
    int i =1;
    for (i=1; i<=n; i++)
    {
        printf("%f\n", x);
    }
    //The input float will be printed for n times because of the loop.
    return 0;
}

