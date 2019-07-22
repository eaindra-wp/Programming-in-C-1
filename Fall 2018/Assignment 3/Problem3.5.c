/*
    JTSK-320111
    a3_p5.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int n, hour, i;
    scanf("%d", &n);
    i = 1;
    for (i = 1; n < 1; i++)
    {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }
    //This is to repeat the loop if n is zero or negative.
    for (i = 1; i <= n; i++)
    {
        if (n == 1)
        {
            printf("1 day = 24 hours\n");
        }
        //The function above will work if the input n=1.
        else
        {
            printf("1 day = 24 hours\n");
            for (i = 2; i <= n; i++)
            {
                hour =  i * 24;
                printf("%d days = %d hours\n", i, hour);
            }
            //The function above will work if the input n>2.
        }
    }
    return 0;
}

