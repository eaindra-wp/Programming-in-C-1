/*
    JTSK-320111
    a2_p3.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int week, day, hour;
    printf("Enter the number of weeks:");
    scanf("%d", &week);
    printf("\nEnter the number of days:");
    scanf("%d", &day);
    printf("\nEnter the number of hours:");
    scanf("%d", &hour);
    printf("\nTotal number of hours:%d\n", (week*7*24)+(day*24)+hour);
    return 0;
}
