#include <stdio.h>

int main(){
    char line1[50];
    double a, b;
    printf("Enter two doubles: ");

    fgets(line1, sizeof(line1), stdin);
    scanf(line1, "%lf", &a);
    scanf(line2, "%lf", &b);
    printf("sum of doubles=%lf\n", a + b);

    double difference_d= a - b;
    printf("difference of doubles=%lf\n", difference_d);

    double square_a= a * a;
    printf("square=%lf\n", square_a);

    char line2[10];
    int c, d;
    printf("Enter two integers: ");

    fgets(line2, sizeof(line2), stdin);
    scanf(line2, "%d", &c, &d);

    int sum_i= c + d, product_i= c * d;
    printf("sum of integers=%d\n", sum_i);
    printf("product of integers=%d\n", product_i);

    /*char line3[10];
    char e, f;
    printf("Enter two chars: ");

    fgets(line3, sizeof(line3), stdin);
    scanf(line3, "%c", &c, &d);*/
    return 0;

}
