#include <stdio.h>

int main()
{
    int a = 10;

    // while circulate
    printf("### while circulate\n");
    while (a < 20)
    {
        printf("a is: %d\n", a);
        a++;
    }
    
    // for circulate
    printf("\n### for circulate\n");
    for (int a = 10; a < 20; a++)
    {
        printf("a is: %d\n", a);
    }

    // do-while circulate
    printf("\n### do-while circulate");
    a = 10;
    do
    {
        printf("a is: %d\n", a);
        a ++;
    } while(a < 20);

    // nested for-circulate
    for (int i = 2, j; i < 100; i++)
    {
        for (j = 2; j <= (i / j); j++)
        {
            if (!(i % j)) break;
        }
        if (j > (i / j)) printf("%d is prime number\n", i);
    }

    // nested while-circulate
    int i = 1, j;
    while (i <= 5)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }
    
    // nested do-while-circulate
    i = 1;
    do
    {
        j = 1;
        do
        {
            printf("*");
            j++;
        } while (j <= i);
        printf("\n");
        i++;
    } while (i <= 5);
}