/*
    JTSK-320111
    a6_p7.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
int prime(int num, int k);
//prototype of the function
int main()
{
    int x, p;
    scanf("%d", &x);
    p = prime(x, x/2);
    //To check the return value from the function
    if (p == 1)
    {
        printf("%d is prime\n", x);
    }
    else
    {
        printf("%d is not prime\n", x);
    }
}
int prime(int num, int k)
{
    if (num == 1)
    {
        return 0;
    }
    else if (k == 1)
    {
        return 1;
    }
    else
    {
        if (num % k == 0)
        {
            return 0;
        }
        else
        {
            return prime(num, k-1);
        }
    }
}
