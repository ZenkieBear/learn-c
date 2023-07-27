#include <stdio.h>

/**
 * IO is input and output.
 * Input means some data would be used to fill program.
 * Ouput means some data would be shown on the screen, printer...
 */
int main()
{
    float f;
    printf("Zenkie Bear\n");
    // use variable's pointer to input data
    printf("Enter a number: ");
    scanf("%f", &f);
    printf("Value is: %f\n", f);

    return 0;
}