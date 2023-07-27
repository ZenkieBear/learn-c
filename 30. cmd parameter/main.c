#include <stdio.h>

/**
 * When you execute the c program, you could transfer command line parameters.
 * count is a number of arguments, args is the argument array.
 */
int main(int count, char *args[])
{
    if (count == 2)
    {
        /**
         * memtion: args[0] storaged the name of program, args[1] is the first cmd parameter. args[count - 1]
         * is the last parameter.
         */
        printf("The argument supplied is %s\n", args[1]);
    }
    else if (count > 2)
    {
        printf("Too many arguments supplied!\n");
    }
    else
    {
        printf("One argument expected...\n");
    }
    
    return 0;
}