/*
    JTSK-320111
    a5_p9.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int prodminmax(int arr[], int n);
int main()
{
    int n, *arr, k;
    printf("How many integers? ");
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    //using malloc to allocate the size of the array
    if (arr == NULL)
    {
        exit(1);
    }
    //checking the condition for the size of the array
    for (k = 0; k < n; k++)
    {
        scanf("%d", &arr[k]);
    }
    //accepting n integers of input to the array
    prodminmax(arr, n);
    free(arr);
    //deallocation of the array afterwards
    return 0;
}
int prodminmax(int arr[], int n)
{
    int i, j;
    int min = arr[0];
    int max = arr[0];
    int product = 1;
    //looking for the smallest integer in the array
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    //looking for the largest integer in the array
    for (j = 1; j < n; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }
    product = max * min;
    //product of the minimum and maximum integers in the array
    printf("Product= %d", product);
    return product;
}
