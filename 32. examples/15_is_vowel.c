#include <stdio.h>
#include <string.h>

int main() {
    char c, vowels[] = "aeiouAEIOU";

    printf("Enter a character: ");
    scanf("%c", &c);

    char *isVowel = strchr(vowels, c);
    if (isVowel)
        printf("%c is a vowel", c);
    else
        printf("%c is not a vowel", c);
    return 0;
}