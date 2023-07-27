#include <stdio.h>

int main() {
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number < 0)
        printf("%f is negative number.", number);
    else if (number == 0)
        printf("%f is 0.", number);
    else
        printf("%f is positive number.", number);
    return 0;
}