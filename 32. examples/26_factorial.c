#include <stdio.h>

int factorial(int n) {
    if (n > 1)
        return factorial(n - 1) * n;
    else
        return 1;
}

int main() {
    int n;
    unsigned long long fac = 1;

    printf("Enter step: ");
    scanf("%d", &n);

    if (n < 0)
        fprintf(stderr, "Error: Step should be a positive number.");
    else {
        for (int i = 1; i <= n; i++) {
            fac *= i;
        }
        printf("%d! = %d\n", n, fac);
    }

    // recursion
    printf("%d! = %d", n, factorial(n));

    return 0;
}