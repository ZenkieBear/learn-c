#include <stdio.h>

// define variable x, y out of functions
int x, y;
int addTwoNum()
{
    // declare variables x & y as external variables within a function
    extern int x, y;
    
    // assign values to external variables x & y
    x = 1, y = 2;

    return x + y;
}

int main()
{
    int result;
    // call function addTwoNum
    result = addTwoNum();

    printf("result: %d", result);
    return 0;
}