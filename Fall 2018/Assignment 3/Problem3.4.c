/*
    JTSK-320111
    a3_p4.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int n, hour, i;
    scanf("%d", &n);
    i = 1;
    while (i > n)
    {
        scanf("%d", &n);
    }
    //This is to repeat the loop if n is zero or negative.
    while (i <= n)
    {
        if (n == 1)
        {
            printf("1 day = 24 hours\n");
        }
        //The function above will work if the input n=1.
        else
        {
            printf("1 day = 24 hours\n");
            i = 2;
            while (i <= n)
            {
                hour =  i * 24;
                printf("%d days = %d hours\n", i, hour);
                i++;
            }
            //The function above will work if the input n>2.
        }
    }
    return 0;
}

