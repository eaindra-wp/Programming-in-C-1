/*
    JTSK-320111
    a6_p2.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
void print_arr(float arr[], int size);
void divby5(float arr[], int size);
int main()
{
    int n = 6;
    float array[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    printf("Before:\n");
    print_arr(array, n);
    //The initial elements in the array will be printed.
    divby5 (array, n);
    //So, all elements are divided by 5.
    printf("After:\n");
    print_arr(array, n);
    //The elements after being divided by 5 will be printed.
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


