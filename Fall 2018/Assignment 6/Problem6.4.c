/*
    JTSK-320111
    a6_p2.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
void print_arr(float arr[], int size);
void divby5(float arr[], int size);
int main()
{
    int n, i;
    float *dyn_array;
    printf("How many elements do you want to add? ");
    scanf("%d", &n);
    dyn_array = (float*) malloc(sizeof(float) * n);
    if (dyn_array == NULL)
    {
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        printf("\nType your floats %d: ", i+1 );
        scanf("%f", &dyn_array[i]);
    }

    printf("\n");
    printf("Before:\n");
    print_arr(dyn_array, n);
    //The initial elements in the array will be printed.
    divby5 (dyn_array, n);
    //So, all elements are divided by 5.
    printf("After:\n");
    print_arr(dyn_array, n);
    //The elements after being divided by 5 will be printed.
    free (dyn_array);
    return 0;
}
void print_arr(float arr[], int size)
{
    for (int k=0; k < size; k++)
    {
        printf("%.3f ", arr[k]);
    }
    printf("\n");
}
/*
    This function is to print the elements in the array
    before and after condition.
*/
void divby5(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] / 5;
    }
}
//This function is to divide all elements in the array by 5.


