#include <stdio.h>

int main()
{
    int v = 100;
    // this pointer point to the variable v
    int *pt1 = &v;
    // this pointer point to the pointer pt1
    int **pt2 = &pt1;

    printf("v: %d\n", v);
    printf("pt1: %p\n", pt1);
    printf("*pt1: %d\n", *pt1);
    printf("pt2: %p\n", pt2);
    printf("**pt2: %d\n", **pt2); // you need to use ** to access the value
}