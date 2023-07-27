#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("%c's ascii is: %d", c, c);
    return 0;
}