#include <stdio.h>
#include <string.h>

int main()
{
    /**
     * In fact, C language's String is a character array end with \0; \0 is the ending marker.
     * Empty string(ending character, NUL), is a control chararcter 0. \0 is an escape character, it tells compiler this isn't the
     * character 0, but a null charater.
     */

    // Created a RUNOOB string. It's end with \0, so its length is bigger 1 than word RUNOOB.
    char site[7] = {'R', 'U', 'N', 'O', 'O', 'B'/* , '\0' */};
    // the same
    char site1[] = "RUNOOB";
    
    /**
     * Actually, you dont need to put the NULL character to the end of string. C compiler will do this thing, when
     * the array initialized.
     */
    printf("site: %s, zenkie[6]: %c\n", site, site[7]);

    // string functions
    // strcpy
    char s1[14]= "hello";
    char s2[14] = "";
    printf("&s1: %p, &s2: %p\n", &s1, &s2);
    printf("before copy, s1: %s, s2: %s\n", s1, s2);
    // copy s1 to s2
    strcpy(s2, s1);
    printf("after copy, s1: %s, s2: %s\n", s1, s2);

    // concat s2 to s1
    strcat(s1, s2); // s1 = hellohello, s2 = hello
    printf("strcat(s1, s2): %s\n", s1); // hellohello
    
    // get length of a string
    printf("strlen(s1): %d\n", strlen(s1));

    // compare
    printf("compare s1 and helln: %d\n", strcmp(s2, "helln"));
    printf("compare s1 and hello: %d\n", strcmp(s2, "hello"));
    printf("compare s1 and hellp: %d\n", strcmp(s2, "hellp"));

    // get the first pointer match the character
    printf("pointer: %p\n", strchr(s1, 'e'));

    // get the first pointer match the string
    printf("pointer: %p\n", strstr(s1, "el"));
    return 0;
}