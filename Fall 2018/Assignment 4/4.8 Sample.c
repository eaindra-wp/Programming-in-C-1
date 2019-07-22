/*
    JTSK-320111
    a4_p8.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char one[100];
    scanf ("%[^\n]%*c", one);

    char two[100];
    scanf ("%[^\n]%*c", two);
    int value1= strlen(one);
    int value2= strlen(two);

    printf("length1=%d\n", value1);
    printf("length2=%d\n", value2);
    //Print the length of string one and two accordingly

    int compare = strcmp(one, two);
    /*
        compare the letters in two strings starting from
        the first character. If the first character is the same,
        it will move to the second character.
    */
    //concatenate string one and two
    printf("concatenation=%s", strcat(one,two));

    char three[100];
    strcpy(three, two);
    printf("\ncopy=%s\n", three);
    /*
    copy the characters in string two to string three,
    so the existing characters in string two will be shown up
    instead of the input characters for string three.
    */

    if (compare == 0)
    {
        printf("one is equal to two\n");
    }

    /*This will be printed out if the first unequal character
    in one is larger than the first unequal character in two.*/

    else if (compare < 0)
    {
        printf("one is smaller than two\n");
    }
    /*
        This will be printed out if the first unequal character
        in one is smaller than the first unequal character in two.
    */
    else
    {
        printf("one is larger than two\n");
    }
    /*
        This will be printed out if all characters
        in one and two are the same.
    */

    char c;
    scanf("%c", &c);
    int checker = 0;
    int k;
    for (k = 0; k <= strlen(two); k++)
    //Loop for looking for the character.
    {
        if (c == two[k])
        {
            printf("position=%d\n", k);
            //Print the position of the character in the string
            checker++;//count to see if any character is found.
            break;
        }
    }
    if (checker==0)
    {
        printf("The character is not in the string\n");
    }
    //To show for null characters
    return 0;
}


