#include<stdio.h>

int main()
{
    const int MAX = 3;
    int var[] = {10, 100, 200};
    int *ptr = var, i;
    // increase
    for (i = 0; i < MAX; i++)
    {
        printf("address: var[%d] = %p\n", i, ptr);
        printf("value: var[%d] = %d\n", i, *ptr);
        ptr ++;
    }

    // decrease
    ptr = &var[MAX - 1];
    for (i = MAX; i > 0;)
    {
        i --;
        printf("address: var[%d] = %p\n", i, ptr);
        printf("value: var[%d] = %d\n", i, *ptr);
        ptr --;
    }

    // compare
    ptr = var; // use a array name as a pointer is valid, so *(ptr + 2) is a valid way to access var[2];
    i = 0;
    while (ptr <= &var[MAX - 1])
    {
        printf("address: var[%d] = %p\n", i, ptr);
        printf("value: var[%d] = %d\n", i, *ptr);
        ptr ++;
    }
    
    return 0;
}