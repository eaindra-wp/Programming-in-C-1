/*
    JTSK-320111
    a6_p1.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
void pattern(int number, char sign);
//the prototype of the void function
void input (int n, char ch);
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char ch;
    scanf("%c", &ch);
    getchar();
    pattern(n, ch);
    //The void function is called in the main function.
}

void pattern(int num, char sign)
{
    int i, j;
    for (i = n; i > 0; i--)
    //loop for the number of rows
    {
        for (j=num; j>=i; j--)
        //loop for the number of columns
        /*
            Since we want to see a triangle in a descending mode,
            we will have to do the decrement of numbers.
        */
        {
            printf("%c", sign);
        }
        printf("\n");
    }
}

