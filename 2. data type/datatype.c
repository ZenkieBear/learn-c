#include <stdio.h>
#include <float.h>

int main()
{
    // print the size of a data type
    printf("char: %lu \n", sizeof(char));
    printf("signed char: %lu \n", sizeof(signed char));
    printf("unsigned char: %lu \n", sizeof(unsigned char));
    printf("int: %lu \n", sizeof(int));
    printf("unsigned int: %lu \n", sizeof(unsigned int));
    printf("short: %lu \n", sizeof(short));
    printf("unsigned short: %lu \n", sizeof(unsigned short));
    printf("long: %lu \n", sizeof(long));
    printf("unsigned long: %lu \n", sizeof(unsigned long));

    printf("float max bytes: %lu \n", sizeof(float));
    printf("float min value: %E \n", FLT_MIN);
    printf("float max value: %E \n", FLT_MAX);
    printf("float precision: %d \n", FLT_DIG);

    
    return 0;
}