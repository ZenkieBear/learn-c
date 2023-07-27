#include <stdio.h>

int main()
{
    int sum = 17, count = 5;
    double mean;
    // (double) make sum convert to double type first, then perform the remaining operations.
    mean = (double) sum / count; // sum = 17 => 17.000000 / 5 = 3.400000
    printf("mean: %f, straight: %f\n", mean, (double)(sum / count)); // integer division will lost some data

    // integer promotion
    int i = 17;
    char c = 'c'; // c's ascii code is 99
    sum = i + c;
    printf("sum: %d\n", sum);

    /**
     * Commonly type convertion
     * int -> unsigned int -> long -> unsigned long -> long long -> unsigned long long -> float ->
     * double -> long double
     */
    i = 17;
    float sum1 = i + c;
    printf("sum: %f\n", sum1);
    return 0;
}