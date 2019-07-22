/*
    JTSK-320111
    a3_p2.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);
    if ((a % 2 == 0) && (a % 7 == 0))
    {
        printf("The number is divisible by 2 and 7\n");
    }
    /*
        If the number is divisible by both 2 and 7,
        the line above will be shown.
    */
    else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    /*
        If the number is NOT divisible by both 2 and 7,
        the line above will be shown.
    */
	return 0;
}
