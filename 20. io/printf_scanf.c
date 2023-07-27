#include <stdio.h>

int main()
{
    /**
     * int scanf(const str *format, ...) read from stdin, and parse by the format string.
     * int printf(const str *format, ...) write to stdout, and format by the format string.
     */
    char str[100];
    int i;

    printf("Enter a value: ");
    // input
    scanf("%s %d", str, &i);

    // output
    printf("\nYou entered: %s %d\n", str, i);

    return 0;
}