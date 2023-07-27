#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
        printf("It's a letter");
    else
        printf("It's not a letter");
    
    return 0;
}