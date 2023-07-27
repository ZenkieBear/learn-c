#include <stdio.h>
#include <stdlib.h>

// a function need a callback function pointer as the parameter
extern void populate_array(int *array, size_t array_size, int (*fun)(void));

int max(int x, int y)
{
    return x > y ? x : y;
}

// the function which is pointed to
int random()
{
    return rand();
}

int main()
{
    int (* p)(int, int) = &max; // it's a function pointer
    int a, b, c;

    printf("Please enter 3 number: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Maximum is: %d\n", p(p(a, b), c));

    // callback function
    int arr[10];
    populate_array(arr, 10, random);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}