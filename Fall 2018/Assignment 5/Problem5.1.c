/*
    JTSK-320111
    a5_p1.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float lower, upper, step;
    scanf("%f", &lower);
    scanf("%f", &upper);
    scanf("%f", &step);

    float i;

    for ( i = lower; i <= upper ; i += step)
    {
        printf("%f %f %f\n", lower, M_PI * lower * lower,  2 * M_PI * lower);
        lower = lower + step;
    }
    /*
        <math.h> library is added to this program, so the value of PI is added as M_PI.
        Since the starting point is the lower limit, the loop is checked if the iteration i
        is equal to the lower limit and equal to or less than the upper limit.
        Also, the value of i will be added by the step input after one loop is done.
    */
    return 0;
}


