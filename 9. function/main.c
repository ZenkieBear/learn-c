#include <stdio.h>

// This is a function declare, it tells compiler the function num and how to call it.
int max(int n1, int n2);
// In function decalre, param name isn't important, so this is a valid declare
int max(int, int);
void swap(int, int);
void swap_by_ptr(int*, int*);

int main(int argc, char const *argv[])
{
    // calling a function
    int ret = max(100, 200);
    printf("Maximum value is: %d\n", ret);
    
    // call by value
    int a = 1, b = 2;
    printf("\n### call by value\n");
    printf("before calling, a is: %d, b is: %d\n", a, b);
    swap(a, b);
    printf("after calling, a is: %d, b is: %d\n", a, b);
    // call by pointer
    printf("\n### call by pointer\n");
    printf("before calling, a is: %d, b is: %d\n", a, b);
    swap_by_ptr(&a, &b);
    printf("after calling, a is: %d, b is: %d\n", a, b);
    return 0;
}

void swap(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

void swap_by_ptr(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

/**
 * This is a function return the maximum between two nubmer.
 * 
 * @param n1 number 1
 * @param n2 number 2
 */
int max(int n1, int n2)
{
    int result;

    if (n1 > n2)
    {
        result = n1;
    }
    else
    {
        result = n2;
    }
    return result;
}