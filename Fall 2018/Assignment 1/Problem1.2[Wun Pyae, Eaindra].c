/*JTSK-320111
a1_p2.c
Wun Pyae, Eaindra
e.wunpyae@jacobs-university.de*/

#include <stdio.h>

int main() {
    int result; /* The result of our calculation */
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n", result);
    return 0;
}

/*The real result is 27. In the initial problem, the ", result" is not added in the printf line before the closed bracket comes.
That is why we get a random number, instead of the real result, which is 27.*/


