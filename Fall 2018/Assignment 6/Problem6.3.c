/*
    JTSK-320111
    a6_p3.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int count_lower(char str[]);
int i = 0;
int main()
{
    char set[50];
    /*
        while the program is still working and true,
        we can type as many strings as we want.
    */

    while(1)
    {
        fgets(set, sizeof(set), stdin);
        //if the first character is '\n', the program will stop working.
        if (set[0] == '\n')
        {
            break;
        }
        count_lower(set);
    }
}
int count_lower(char str[])
{
    int count = 0;
    //The loop will work until the last character in the array is found.
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        //This is to check whether the characters are lowercase alphabets or not.
        {
            {
                count++;
            }
        }
    }
    printf("Number of lowercase letters= %d\n", count);
    return 0;
}
