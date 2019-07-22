/*
    JTSK-320111
    a5_p7.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int n;
int matrix (int arr[][n]);
int diagonal(int arr[][n]);
//prototypes of the function

int main()
{
    int multi_array[30][30];
    scanf("%d", &n);
    matrix(multi_array);
    diagonal(multi_array);
    //calling the functions in the main function
    return 0;
}
int matrix(int arr[][n])
{
    int a, b;
    for (a = 0; a < n ; a++)
    {
        for (b = 0; b < n; b++)
        {
            scanf("%d", &arr[a][b]);
        }
    }
    //The function will accept n*n integers to the program with the loop.
    printf("The entered matrix is:\n");
    for (a = 0; a < n ; a++)
    {
        for (b = 0; b < n; b++)
        {
            printf("%d ", arr[a][b]);
        }
        printf("\n");
    }
    return arr[a][b];
    /*The input integers will be returned and printed on the screen if
    this function is called in the main function.*/
}
int diagonal(int arr[][n])
{
    int r, c;
    printf("Under the main diagonal:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < r; c++)
        {
            if ( r+c < (2*n)-1)
            {
                printf("%d ", arr[r][c]);
            }
        }
    }
    /*
        If the addition of the matrix location of an integer is less
        than or equal to 2n-1, that integer will be returned and printed
        on the screen.
    */
    printf("\n");
    return arr[r][c];
}
