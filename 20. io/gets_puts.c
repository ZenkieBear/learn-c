#include <stdio.h>

int main()
{
    /**
     * gets() & puts()
     * char *gets(char *s) read a line from stdin to a buffer s pointed, until met a end character or EOF.
     * int puts(const char *s) write a string s and a line-break character to stdout.
     */
    char str[100];
    printf("Enter a string: ");
    // read
    gets(str);

    printf("\n You entered: ");
    // write
    puts(str);
    
    return 0;
}