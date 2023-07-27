#include <stdio.h>

int main() {
    double a, b, c;
    printf("Enter three number(blank space separate): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > b && b > c)
        printf("%.2f is the biggest.", a);
    if (b > a && a > c)
        printf("%.2f is the biggest.", b);
    if (c > b && b > a)
        printf("%.2f is the biggest.", c);
    return 0;
}