#include <stdio.h>
#include <string.h>

/**
 * Union is a data type allows you storage different data types at the same memory address.
 * You can define a union with multiple members, but there can only be a member has value anytime.
 */
// define a union
union Data
{
    int i;
    float f;
    char  str[20];
};

int main()
{
    union Data data;
    // union's size is the biggest member's size
    printf("Memory size occupied by data: %d", sizeof(data));

    // access member with member access operator(.)
    data.i = 10;
    data.f = 220.5;
    strcpy(data.str, "C Programming");

    printf("data.i: %d\n", data.i);
    printf("data.f: %d\n", data.f);
    printf("data.str: %s\n", data.str);
    /**
     * by the print infomation, you can see i and f is broken, because union can use only one member at one moment.
     */
    // let's use only one member at one moment
    data.i = 10;
    printf("data.i: %d\n", data.i);
    data.f = 220.5;
    printf("data.f: %d\n", data.f);
    strcpy(data.str, "C Programming");
    printf("data.str: %s\n", data.str);
    // congratulations! members had been print correctly!.
    return 0;
}