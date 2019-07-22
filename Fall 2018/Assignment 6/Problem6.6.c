/*
    JTSK-320111
    a6_p6.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
int recursive (int j);
//prototype of the function
int main()
{
    int n;
    printf("Type the number of integers: ");
    scanf("%d", &n);
    recursive(n);
    //call the recursive function
}
//recursive for printing the integers in a decrementing way
int recursive(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    /*
        if a negative integer or zero is typed in,
        the function will return 0.
    */
    else if (n == 1)
    {
        printf("1");
    }
    /*
        If n becomes to be equal to 1,
        1 will be printed without ',' afterwards.
    */
    else
    {
        printf("%d,", n);
        recursive(n-1);
        //reducing the input n by 1 by recursion
    }
    /*
        if not, the integers will be printed
        in a decrementing way.
    */
    return 0;
}
