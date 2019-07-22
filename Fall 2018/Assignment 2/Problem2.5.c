/*
    JTSK-320111
    a2_p5.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Please type an integer: ");
    scanf("%d", &a);
    printf("You typed this integer: %d\n", a);

    int *ptr_a;
    ptr_a = &a;
    printf("The address of your integer is %p.\n", ptr_a);

    *ptr_a= *ptr_a + 5;
    printf("The integer after adding 5 to your integer is %d.\n", *ptr_a);
    printf("The new address of your integer is %p.\n", ptr_a);

    return 0;
}
