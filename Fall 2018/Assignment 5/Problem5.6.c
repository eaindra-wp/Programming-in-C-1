/*
    JTSK-320111
    a5_p6.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int greatest_values(int arr[], int j);
int main()
{
    int n, i, *dyn_array;
    printf("How many integers do you want to type? ");
    scanf("%d", &n);
    //dynamic memory allocation for the array
    dyn_array= (int*) malloc(sizeof(int) * n);
    if (dyn_array == NULL)
    {
        exit(1);
    }
    //if the array is empty, the program will exit.
    for (i=0; i < n; i++)
    {
        printf("Type integer %d: ", i+1);
        scanf("%d", &dyn_array[i]);
    }
    //add integers to the array by using the loop
    greatest_values(dyn_array, n);
    free (dyn_array);//deallocation of memory
}
int greatest_values(int arr[], int j)
{
    int k, index;
    int f_greatest= arr[0];
    int s_greatest= arr[1];
    if (f_greatest < s_greatest)
    {
        index= s_greatest;
        s_greatest = f_greatest;
        f_greatest = index;
    }
    /*
    if the integer in the first array is less than the
    integer in the second array, they will be swapped.
    */
    for (k = 2; k < j; k++)
    {
        if (arr[k] > f_greatest)
        {
            s_greatest = f_greatest;
            f_greatest = arr[k];
        }
        /*
            if the integer found is larger than the most recent largest integer,
            the first and second largest integers will be changed.
        */

        else if (arr[k] > s_greatest)
        {
            s_greatest = arr[k];
        }
        /*
            if the integer found is larger than the most recent second largest
            integer, the second largest integers will be changed.
        */

    }
    //comparing and searching for the first two largest integers.
    printf("First greatest integer= %d\n", f_greatest);
    printf("Second greatest integer= %d\n", s_greatest);
    return 0;
}
