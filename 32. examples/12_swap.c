#include <stdio.h>

int main() {
    double a, b, t;
    printf("Enter number one: ");
    scanf("%lf", &a);
    printf("Enter number two: ");
    scanf("%lf", &b);

    t = a;
    a = b;
    b = t;

    printf("Swaped a: %lf, b: %lf", a, b);
    return 0;
}