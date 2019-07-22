/*
    JTSK-320111
    a4_p4.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
void print_form(int n, int m, char c);
int main()
{
    int n, m;
    char c;
    scanf("%d", &n);
    getchar();
    scanf("%d", &m);
    getchar();
    scanf("%c", &c);
    getchar();
    print_form(n, m, c);
    //call the void function in the main function
    return 0;
}
void print_form(int n, int m, char c)
{
    //declare the function for the row of the pattern
    for (int i = n; (m+n-i) <= (m+n-1); i--)
    {
        //declare the function for the column of the pattern
        for (int j = 1; j <= m ; j++)
        {
            printf("%c", c);
        }
        m++;
        printf("\n");
    }
}

