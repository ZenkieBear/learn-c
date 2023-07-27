#include <stdio.h>

// global variable
int g;
int main()
{
    // local variables
    int a, b, c;
    int sum(int, int);

    // initialization
    a = 10, b = 20, c = a + b;

    printf("value of a = %d, b = %d and c = %d\n", a, b, c);

    g = a + b;
    printf("value of a = %d, b = %d and g = %d\n", a, b, g);

    printf("value of a in main() = %d\n", a);
    c = sum(a, b);
    printf("value of a in main() = %d\n", c);
    return 0;
}

int sum(int a, int b)
{
    printf("value of a in sum() = %d\n", a);
    printf("value of b in sum() = %d\n", b);
    
    return a + b;
}