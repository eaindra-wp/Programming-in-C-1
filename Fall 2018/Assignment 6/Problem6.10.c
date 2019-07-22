/*
    JTSK-320111
    a6_p10.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *file1, *file2, *fr1, *fr2, *fmerge;
    char str1[200], str2[200], ch;
    //creating a file for the first text
    file1 = fopen("E:\\Readings for Jacobs\\C\\text1.txt", "w");
    if (file1 == NULL)
    {
        exit(1);
    }
    //adding the first text to the file
    fprintf(file1, "Text from the first file\n");
    fprintf(file1, "Hello world\n");
    fclose(file1);

    //creating a file for the second text
    file2 = fopen("E:\\Readings for Jacobs\\C\\text2.txt", "w");
    if (file2 == NULL)
    {
        exit(1);
    }
    //adding the second text to the file
    fprintf(file2, "Text from the second file\n");
    fprintf(file1, "Hello string\n");
    fclose(file2);

    //reading the first text from the file
    fr1 = fopen("E:\\Readings for Jacobs\\C\\text1.txt", "r");
    //fgets(str1, 200, stdin);
    if (fr1 == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    fscanf(fr1, "%[^\r]%*c", str1);
    //adding the texts found in the file to the array

    //reading the second double from the file
    fr2 = fopen("E:\\Readings for Jacobs\\C\\text2.txt", "r");
    //fgets(fr2, "%s", str2);
    if (fr2 == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    fscanf(fr2, "%[^\r]%*c", str2);
    //adding the texts found in the file to the array


    //creating a text file to merge two texts from two files
    fmerge = fopen("E:\\Readings for Jacobs\\C\\merge12.txt", "w");
    if (fmerge == NULL)//error message
    {
        printf("Error!\n");
        exit(1);
    }
    while((ch=getc(fr1))!=EOF)
    {
        fputc(ch, fr1);
    }
    while((ch=getc(fr2))!=EOF)
    {
        fputc(ch, fr2);
    }
    //copying the characters found in two files to a new file.
    fprintf(fmerge, "%s\n%s\n", str1, str2);

    fclose(fr1);
    fclose(fr2);
    fclose(fmerge);
    //closing the files after all operations have been done.

return 0;
}
