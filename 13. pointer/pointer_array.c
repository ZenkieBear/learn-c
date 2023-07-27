#include <stdio.h>

const int MAX = 3;

int main()
{
    int var[] = {10, 100, 200};

    for (int i = 0; i < MAX; i++)
    {
        printf("Value of var[%d]: %d\n", i, var[i]);
    }

    // it's a pointer array
    int *ptr[MAX];
    for (int i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i];
    }
    for (int i = 0; i < MAX; i++)
    {
        printf("Value of var[%d]: %d\n", i, *ptr[i]);
    }

    // pointer can storage a string array
    const char *names[] = {
        "Zara Ali",
        "Zenkie Bear",
        "Linus Torvalds"
    };
    for (int i = 0; i < MAX; i++)
    {
        printf("Value of names[%d]: %s\n", i, names[i]);
    }
}