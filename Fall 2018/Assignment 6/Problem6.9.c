/*
    JTSK-320111
    a6_p9.c
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file1, *file2, *fr1, *fr2, *fresult;
    //creating a file for the first double
    double d_one, d_two;
    file1 = fopen("E:\\Readings for Jacobs\\C\\double1.txt", "w");
    if (file1 == NULL)
    {
        exit(1);
    }
    //adding the first double to the file
    fprintf(file1, "6.5\n");
    fclose(file1);

    //creating a file for the second double
    file2 = fopen("E:\\Readings for Jacobs\\C\\double2.txt", "w");
    if (file2 == NULL)
    {
        exit(1);
    }
    //adding the second double to the file
    fprintf(file2, "2.0\n");
    fclose(file2);

    //reading the first double from the file
    fr1 = fopen("E:\\Readings for Jacobs\\C\\double1.txt", "r");
    fscanf(fr1, "%lf", &d_one);
    if (fr1 == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    fclose(fr1);

    //reading the second double from the file
    fr2 = fopen("E:\\Readings for Jacobs\\C\\double2.txt", "r");
    fscanf(fr1, "%lf", &d_two);
    if (fr2 == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    fclose(fr2);

    /*
        creating a text file to save the sum, difference, product and
        division of two doubles
    */
    fresult = fopen("E:\\Readings for Jacobs\\C\\results.txt", "w");
    if (fresult == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    double sum, difference, product, division;
    sum = d_one + d_two;
    difference = d_one - d_two;
    product = d_one * d_two;
    division = d_one / d_two;
    fprintf(fresult, "sum= %lf\ndifference= %lf\n", sum, difference);
    fprintf(fresult, "product= %lf\ndivision= %lf\n", product, division);
    //save the results of two doubles in 'results.txt' file.
    fclose(fresult);

    return 0;

}
