#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta;
    double x1, x2;
    printf("Enter three coefficient of univariate quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / 2 * a;
        x2 = (-b - sqrt(delta)) / 2 * a;
        printf("x1 = %f, x2 = %f", x1, x2);
    } else if (delta == 0) {
        x1 = (-b + sqrt(delta)) / 2 * a;
        printf("x1 = x2 = %f", x1);
    } else
        printf("No solution.");
        
    return 0;
}