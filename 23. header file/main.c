int x;
#include <stdio.h>
#include "header.h"
// Conditional including
#define SYSTEM 2
#if SYSTEM == 1
    #include "darwin.h"
#elif SYSTEM == 2
    #include "windows.h"
#endif
// Use -D option define which head file to be include
// #define SYSTEM_H "linux.h"
#define SYSTEM_H "windows.h"
#include SYSTEM_H

int main()
{
    puts(test());
    printf("system: %s\n", SYSTEM_NAME);
}
