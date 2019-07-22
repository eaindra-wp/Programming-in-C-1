/*
    JTSK-320111
    a5_p3.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float geometric_mean(float arr[], int num);
float highest_number(float arr[], int num);
float lowest_number(float arr[], int num);
float sum(float arr[], int num);
//prototypes of the function

int main()
{
    int i, number;
    printf("Type a character (m, s, h, l) ");
    char c;
    scanf("%c", &c);
    float array [15];
    printf("Enter the numbers of the floats: ");
    scanf("%d", &number);
    for (i = 0; i < number; i++)
    {
        printf("Enter floats: ");
        scanf("%f", &array[i]);
        //this is to accept the elements in the array.
        if ( array[i] < 0)
        {
            array[i] = 0.0;
            break;
        }
        /*
            if a negative number is typed in, the program
            will stop accepting more floats.
        */
    }
    switch (c)
    {
    case 'm':
        geometric_mean(array, number);
        break;
    /*
        If the char input is 'm', the geometric mean of all floats
        in the array will be counted.
    */
    case 'h':
        highest_number(array, number);
        break;
    /*
        If the char input is 'h', the highest float
        in the array will be printed out.
    */
    case 'l':
        lowest_number(array, number);
        break;
    /*
        If the char input is 'l', the lowest float
        in the array will be printed out.
    */
    case 's':
        sum(array, number);
        break;
    /*
        If the char input is 'l', the lowest float
        in the array will be printed out.
    */
    default:
        printf("\n");
        break;
    }
}
float sum (float arr[], int num)
{
    float summ = 0;
    for (int i = 0; i < num; i++)
    {
        summ = summ + arr[i];
    }
     printf("sum= %f", summ);
     return summ;
}
//The sum of all floats will be calculated and printed.

float geometric_mean(float arr[], int num)
{
    float result = 1;
    float g_mean;
    for (int i = 0; i < num ; i++)
    {
        result = result * arr[i];
    }
    g_mean = pow(result, 1.0/num);
    printf("geometric mean= %f", g_mean);
    return g_mean;
}
//The geometric mean of all floats will be calculated and printed.

float highest_number(float arr[], int num)
{
    float largest = arr[0];
    for (int i = 0 ; i < num; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("highest float= %f", largest);
    return largest;
}
//The highest float in the array will be printed.

float lowest_number(float arr[], int num)
{
    float smallest = arr[0];
    for (int i = 0 ; i < num; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("lowest float= %f", smallest);
    return smallest;
}
//The lowest float in the array will be printed.
