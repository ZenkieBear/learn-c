#include <stdio.h>

// function declare
void func1(void);

// global variable -- static is the default storage class
static int count = 10;

int main()
{
    int mount;
    auto int month; // auto storage class is the default in a function

    while (count --)
    {
        func1();
    }
    return 0;
}

void func1(void)
{
    /*
    'thingy' is a local variable of 'func1', it will initialize for once.
    every time calling func1, 'thingy' won't be reset.
    */
    static int thingy = 5;
    printf("thingy: %d, count: %d\n", ++thingy, count);
}