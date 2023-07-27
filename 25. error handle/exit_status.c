#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int dividend = 20, divisor = 0, quotient;

    if (divisor == 0)
    {
        fprintf(stderr, "divisor is 0, program exited...\n");
        // EXIT_FAILURE is a macro defined in stdlib.h
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    printf("quotient is: %d", quotient);

    // EXIT_SUCCESS is a macro defined in stdlib.h
    exit(EXIT_SUCCESS);
}