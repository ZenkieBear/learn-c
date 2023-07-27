#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;
    printf("Please enter dividend and divisor(blank space separate): ");
    scanf("%d %d", &dividend, &divisor);
    printf("%d / %d = %d...%d", dividend, divisor, dividend / divisor, dividend % divisor);
    return 0;
}