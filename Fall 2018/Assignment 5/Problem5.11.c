/*
    JTSK-320111
    a5_p11.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int count_insensitive(char *str, char c);
int main()
{
    char *arr, *arr2;
    char k;
    int length, length2;
    printf("Type the length of the string: ");
    scanf("%d", &length);
    //asking the user for the length of the array
    if ((length > 50) || (length <=0))
    {
        exit(1);
    }
    //allocating the array dynamically
    arr = (char*) malloc(sizeof(char) * length);
    printf("Type your string\n");
    fgets(arr, sizeof(arr), stdin);
    //accepting the user input to the string
    if (arr == NULL)
    {
        exit(1);
    }
    length2= length;
    arr2 = (char*)malloc(sizeof(char) * length2);
    //allocating another array of the same length with the string
    if (arr2 == NULL)
    {
        exit(1);
    }
    strcpy(arr2, arr);
    //copying the string in the first array to the second array
    free(arr);
    //deallocating the first array
    count_insensitive(arr2, k);
    return 0;
}
int count_insensitive(char *str, char c)
{
    int count_al = 0;
    int count_int = 0;
    int count_sym= 0;
    char a, n, s;
    for (int i = 0; str[i] != '\n'; i++)
    {
        if ( (str[i] >= 'a' && str[i] <= 'z')
                || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                a = tolower(str[i]);
            }
            else
            {
                a = str[i];
            }
            count_al++;
        }
        else if (str[i] >= '0' || str[i] <= '9')
        {
            count_int++;
            n = str[i];
        }
        else
        {
            count_sym++;
            s = str[i];
        }
    }
    printf("The character ’%c’ occurs %d times\n", a, count_al);
    printf("The character ’%c’ occurs %d times\n", n, count_int);
    printf("The character ’%c’ occurs %d times\n", s, count_sym);
    return 0;
}
