#include <stdio.h>

int main() {
    double a, b;
    printf("Please enter two number: ");
    scanf("%lf %lf", &a, &b);
    printf("%lf x %lf = %lf", a, b, a * b);
    return 0;
}