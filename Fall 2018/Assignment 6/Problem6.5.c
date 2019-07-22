/*
    JTSK-320111
    a6_p5.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int product(double v[], double w[], int n);
//prototype of the vector calculation function
int main()
{
    int n;
    scanf("%d", &n);
    //determining the number of components for vector v and w
    double v[100], w[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &v[i]);
    }
    //n components will be typed in to the array for vector v
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &w[i]);
    }
    //n components will be typed in to the array for vector w
    product(v, w, n);
    //calling the vector calculation function in the main function
}
int product(double v[], double w[], int n)
{
    double result = 1, scalar = 0;
    int j, k, l, m, p;
    int pos_min_v = 0, pos_min_w = 0;
    int pos_max_v = 0, pos_max_w = 0;
    //calculation for the scalar product of two vectors
    for (j = 0; j < n ; j++)
    {
        result = v[j] * w[j];
        scalar = scalar + result;
    }
    double min_v, max_v, max_w, min_w;
    min_v = v[0];
    max_v = v[0];
    min_w = w[0];
    max_w = w[0];
    /*
        determining the largest and smallest components for vector v
        together with their positions in the array v
    */
    for (k = 0; k < n ; k++)
    {
        if (min_v > v[k])
        {
            min_v = v[k];
            pos_min_v = k;
        }
    }
    for (l = 0 ; l < n ; l++)
    {
        if (max_v < v[l])
        {
            max_v = v[l];
            pos_max_v = l;
        }
    }

    /*
        determining the largest and smallest components for vector w
        together with their positions in the array w
    */
    for (m = 0; m < n ; m++)
    {
        if (min_w > w[m])
        {
            min_w = w[m];
            pos_min_v = m;
        }
    }
    for (p = 0; p < n ; p++)
    {
        if (max_w < w[p])
        {
            max_w = w[p];
            pos_max_w = p;
        }
    }

    printf("Scalar product=%lf\n", scalar);
    printf("The smallest = %lf\n", min_v);
    printf("Position of smallest = %d\n", pos_min_v);
    printf("The largest = %lf\n", max_v);
    printf("Position of largest = %d\n", pos_max_v);
    printf("The smallest = %lf\n", min_w);
    printf("Position of smallest = %d\n", pos_min_w);
    printf("The largest = %lf\n", max_w);
    printf("Position of largest = %d\n", pos_max_w);
    //printing the results according to what the test case wants to
    return 0;
}
