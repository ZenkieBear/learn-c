#include <stdio.h>

int main()
{
    int a = 100;
    
    // if expression
    if (a < 20)
    {
        printf("a is less than 20\n");
    }

    // if-else expression
    a = 100;
    if (a < 20)
    {
        printf("a is less than 20\n");
    }
    else
    {
        printf("a is bigger than 20\n");
    }

    // if-else if-else expression
    a = 20;
    if (a == 10)
    {
        printf("a is 10\n");
    }
    else if (a == 20)
    {
        printf("a is 20\n");
    }
    else if (a == 30)
    {
        printf("a is 30\n");
    }
    else
    {
        printf("no matched value \n");
    }

    // nested if
    a = 100;
    int b = 200;
    if (a == 100)
    {
        if (b == 200)
        {
            printf("a is 100 and b is 200\n");
        }
    }
    printf("a is: %d\n", a);

    // switch expression
    char grade = 'G';
    switch (grade)
    {
    case 'A':
        printf("Great!\n");
        break;
    case 'B':
    case 'C':
        printf("Good job\n");
        break;
    case 'D':
        printf("You passed\n");
        break;
    case 'F':
        printf("You'd better try again\n");
        break;
    default:
        printf("Invalid grade...\n");
    }

    // tenary expression could instead of if-else expression
    int num;
    printf("input a number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("even") : printf("odd");
}