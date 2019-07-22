/*
    JTSK-320111
    a4_p5.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
int i = 0;
float f;
float arr[i] = f;
float sum (float su, float f)
{
    su = su + f;
    return su;
}
float average (float su, int i)
{
    float avg = su / i;
    return avg;
}
int main()
{
    int n;
    scanf("%d", &n);
    float arr[11];
    scanf("%f", &arr[11]);
    float summ;
    while (i < 10)
    {
        if ( f == -99.0)
        {
            summ = sum (summ, f);
            average(summ, i-1);
        }
        else
        {
            summ = sum (summ, f);
            i++;
            scanf ("%f", &arr[i]);
        }
    }

    printf("sum=%f\n", sum (summ, f));
    printf("average=%f\n", average (summ, i));
    return 0;
}
