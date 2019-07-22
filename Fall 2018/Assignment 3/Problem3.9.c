/*
    JTSK-320111
    a3_p9.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    int n;
    scanf("%d", &n);
    while (n >= 100)
    {
        return 1;
    }
    /*
        If the input n is greater than 100,
        the program will return 1;
    */
    double sum = 0;
    double tempc[110];
    int i;
    for (i = 0; i < n ; i++)
    {
        scanf("%lf", &tempc[i]);
    }
    /*
        All input temperatures will be saved in this array
        until to the 100th temperature.
    */
    switch (c)
    {
    case 's':
        for (i = 0; i < n; i++)
        {
            sum = tempc[i] + sum;
        }
        printf("The sum of temperatures=%lf\n", sum);
        break;
    /*
        If s is typed in for the char input, the sum of all
        input temperatures in the array will be printed out.
    */
    case 'p':
        for (i = 0; i < n; i++)
        {
            printf("The list of all temperatures=%lf\n", tempc[i]);
        }
        break;
    /*
        If p is typed in for the char input, the list of all
        input temperatures in the array will be printed out.
    */

    case 't':
        for (i = 0; i < n; i++)
        {
            double tf = (((9.0/5) * tempc[i]) + 32);
            printf("The temperatures in Fahrenheit=%lf\n", tf);
        }
        break;
    /*
        If t is typed in for the char input,
        input temperatures in the array will be printed out.
    */

    default:
        for (i = 0; i < n; i++)
        {
            sum = sum + tempc[i];
        }
        printf("The mean of all temperatures=%lf\n", sum / n);
        break;
        /*
            This is to print out if other characters are typed in.,
            instead of s, p, t.
        */
    }
    return 0;
}
