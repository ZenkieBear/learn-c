#include <stdio.h>

double factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int fibonacci(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 15;
    printf("!%d: %f\n", n, factorial(n)); // 1 × 2 × 3 × 4 × 5 = 120

    for (int i = 0; i < 10; i++)
    {
        printf("F(%d) = %d\n", i, fibonacci(i));
    }
    return 0;
}