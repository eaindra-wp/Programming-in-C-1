/*
    JTSK-320111
    a4_p5.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>

float sum (float su, float j);
float average (float su, float j, int i);

int main()
{
    /*
        If the user wants to add more than 10 elements,
        -1 will be returned.
    */

    int i = 0;
    float f;
    float summ = 0;
    float ave = 0;
    for (i = 0; i < 11; i++)
    {
        scanf ("%f", &f);
        /*
            Once float f is equal to -99.0,
            the sum and average of previous floats will be printed.
        */
        if (f == -99.0)
        {
            break;
        }
        summ = sum(summ, f);
        ave = average(summ, f, i);
        //Calling the functions in the main function
    }
    printf("sum=%.2f\n", summ);
    printf("average=%.2f\n", ave);
    return 0;
}
float sum (float su, float j)
{
    su = su + j;
    return su;
}
//This function is to calculate the sum of inputs to the array.

float average (float su, float j, int i)
{
    su = su + j;
    float avg = su / i;
    return avg;
}
//This function is to calculate the average of all inputs to the array.

