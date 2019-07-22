/*
    JTSK-320111
    a5_p12.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
void replaceAll(char *str, char c, char e);
//prototype of the function
int main()
{
    char ch[80];
    char c = 'C';
    char e = 'e';
    /*
        If the input string is 'stop' or just the enter key,
        the program will stop working.
        If not, the program will receive numerous strings from the keyboard.
    */
    while (1)
    {
        fgets(ch, 80, stdin);
        if ((ch[0] == 's' && ch[1] == 't' &&
                ch[2] == 'o' && ch[3] == 'p') || ch[0] == '\n')
        {
            break;
        }
        replaceAll(ch, c, e);
        //calling the function in the main function.
    }
}
void replaceAll(char *str, char c, char e)
{
    //if the character is not a new line input, the loop will continue.
    for (int i = 0; str[i] != '\n'; i++)
    {
        //checking condition to change every lowercase 'c' to 'e'
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            c = 'c';
            e = 'e';
            if (str[i] == c)
            {
                str[i] = e;
            }
            //if 'c' is found in the string, it will be changed to 'e'.
        }
        //checking condition to change every uppercase 'c' to 'e'
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            c = 'C';
            e = 'E';
            if (str[i] == c)
            {
                str[i] = e;
            }
        }
        //if 'C' is found in the string, it will be changed to 'E'
    }
    printf("New String: %s", str);
    //the result of new string after character changes
    return;
}
