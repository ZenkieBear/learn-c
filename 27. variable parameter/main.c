#include <stdarg.h>
#include <stdio.h>

double average(int num, ...)
{
    double sum = 0;
    va_list args;
    /**
     * va_start(ap, last_arg) init parameters. ap is a va_list variable, last_arg is name of last variable
     * before the variable paramteres
     */
    va_start(args, num);
    for (int i = 0; i < num; i++)
    {
        /**
         * va_arg(ap, type) return next variable parameter. ap is a va_list variable, type is the type of
         * next variable.
         */
        sum += va_arg(args, int);
    }
    /**
     * va_end(ap) set a va_list to NULL, restore memory ap occupied.
     */
    va_end(args);
    return sum / num;
}

int main()
{
    printf("%f\n", average(2, 1, 2));
    printf("%f\n", average(3, 1, 2, 3));
}