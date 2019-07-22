/*
    JTSK-320111
    a4_p6.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
double sum25 (double v[], int n);
//This is the prototype of the function.
int main()
{
    int n;
    scanf("%d", &n);
    double v[21];
    int i= 0;
        for (i=0; i < n; i++)
        {
            scanf("%lf", &v[i]);
        }
        sum25(v, n);
        //The sum25 is called in the main function.
        printf("\n");
}

double sum25 (double v[], int n)
{
    /*
        If the input of elements is less than 6,
        the program will stop working and -111 will be returned.
    */
    if (n < 6)
    {
        printf("One or both positions are invalid");
        return -111;
    }
    else
    {
        double sum;
        sum = v[2] + v[5];
        printf("sum=%lf", sum);
        return 0;
    }
    /*
        If not, the sum of doubles in position 2 and
        position 5 will be printed.
    */
}
