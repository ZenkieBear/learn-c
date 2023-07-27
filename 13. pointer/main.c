#include <stdio.h>

int main()
{
    int var = 10;
    int *p = NULL; // define pointer use NULL as the initialize value is a good habit.
    printf("p's value: %p\n", p);

    p = &var;

    printf("var's address: %p\n", &var);
    printf("pointer's value: %p\n", p);

    // use pointer to access the value
    printf("*p's value: %d\n", *p);
    return 0;
}