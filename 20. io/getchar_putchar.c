#include <stdio.h>

int main()
{
    /**
     * getchar() & putchar()
     * int getchar(void) read next available character from screen, and return it as a integer number.
     * int putchar(int c) put character on the screen, and return the same character.
     * these two function will only input or output 1 character, you can use it in circulate.
     */
    int c;
    printf("Enter a value: ");
    c = getchar(); // input

    printf("\nYou entered: ");
    putchar(c); // output
    printf("\n");
}