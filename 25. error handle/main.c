#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE * fp;
    int errnum;
    fp = fopen("unexists.txt", "rb");
    if (fp == NULL)
    {
        // errno storaged the current error number
        errnum = errno;
        // use stderr file stream to print all of errors
        fprintf(stderr, "error number: %d\n", errno);
        // perror(char *str) shows like "<str>: <error string>"
        perror("print error by perror");
        // strerror(int errno) return the error num
        fprintf(stderr, "open file error: %s\n", strerror(errnum));
    }
    else
    {
        fclose(fp);
    }

    // avoid 0 divisor, if a divide operation's divisor is 0, it'll make a runtime error
    int dividend = 20, divisor = 1, quotient;
    if (divisor == 0)
    {
        fprintf(stderr, "Divisor is 0, exited...");
        exit(-1);
    }
    quotient = dividend / divisor;
    printf("quotient: %d", quotient);
    exit(0);
    return 0;
}