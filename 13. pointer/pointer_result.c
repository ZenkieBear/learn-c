#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int * getRandom()
{
    static int r[10]; // c dosen't allow return a local variable, unless it's a static variable

    srand((unsigned) time(NULL));
    for (int i = 0; i < 10; i++)
    {
        r[i] =  rand();
        printf("%d\n", r[i]);
    }
    return r;
}

int main()
{
    int *p;
    p = getRandom();
    for (int i = 0; i < 10; i++)
    {
        printf("*(p + %d): %d\n", i, *(p + i));
    }
}