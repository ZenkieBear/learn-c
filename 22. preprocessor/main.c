// tel preprocessor(CPP) make all MAX_ARRAY_LENGTH equals to 20
#define MAX_ARRAY_LENGTH 20

// tell CPP get stdio.h from system library.
#include <stdio.h>
// tell CPP get myheader.h from local path, and add its content to current source file.
#include "myheader.h"

// cancel FILE_SIZE's defination, and redefine it as 42.
#undef FILE_SIZE
#define FILE_SIZE 42

// when MESSAGE is not define, define message
#ifndef MESSAGE
    #define MESSAGE "You wish!"
#endif

#define IS_DEBUGGING 0
/**
 * tell CPP if defined DEBUG, execute debugger statements.
 * try:
 * gcc main.c -DDEBUG
 * ./a.exe
 * gcc main.c
 * ./a.exe
 */
#ifdef DEBUG
    /* debugger statements */
    #undef IS_DEBUGGING
    #define IS_DEBUGGING 1
    /* debugger statements */
#endif

// continuation operator '\'
#define message_for(a, b) \
    printf(#a " and " #b ": We loved you!\n")

// concatenation operator '##'
// actually, it will get n and join token and n
// so here will be like: #define paster() printf("token" #n " = %d", token34)
#define paster(n) printf("token" #n " = %d\n", token##n) 

// defined() expression
#if !defined(MESSAGE) // equals to #ifndef MESSAGE
    #define MESSAGE "You wish!"
#endif

// parameterized macros
#define square(x) (x * x)
#define max(a, b) (a > b ? a : b)

int main()
{
    if (IS_DEBUGGING)
    {
        printf("Debugging!\n");
    }
    // some macros
    printf("File: %s\n", __FILE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("Line: %d\n", __LINE__);
    printf("Is standard compiler(ANSI): %d\n", __STDC__);

    // mention: here don't need "", because it's Preprocessor. It execute at compile time, not runtime.
    message_for(Carole, Debra);

    int token34 = 40;
    paster(34); // here 34 is n, so the value is token34(token + 34)

    printf("Here is the message: %s\n", MESSAGE);

    int base = 2;
    int a = 3, b = 2;
    printf("Square of %d is: %d\n", base, square(base));
    printf("Maximum between %d and %d is: %d\n", a, b, max(a, b));
    return 0;
}