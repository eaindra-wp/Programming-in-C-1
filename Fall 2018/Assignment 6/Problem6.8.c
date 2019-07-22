/*
    JTSK-320111
    a6_p8.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp, *fr, *fo;
    fp = fopen("E:\\Readings for Jacobs\\C\\chars.txt", "w");
    //creating a file called chars.txt
    if (fp == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    fprintf(fp, "Screenshot\n");
    //adding a string in the file
    fclose(fp);


    fr = fopen("E:\\Readings for Jacobs\\C\\chars.txt", "r");
    //opening the file chars.txt
    char fs[100];
    //putting the string found in the file to an array
    while(!feof(fr))
    {
        fgets(fs, 100, fr);
        fputs(fs, fr);
    }
    fclose(fr);

    fo = fopen("E:\\Readings for Jacobs\\C\\codesum.txt", "w");
    //creating a file called codesum.txt
    if (fo == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    printf("sum=%d", fs[0]+fs[1]);
    fprintf(fo, "sum=%d", fs[0]+fs[1]);
    //adding the sum of the first two characters found in chars.txt to codesum.txt.
    fclose(fo);

    return 0;
}
