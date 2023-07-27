#include <stdio.h>

int x = 1, y = 2;
int addTwoNum();
int main()
{
    int result;
    // call function addTwoNum
    result = addTwoNum();

    printf("result: %d", result);
    return 0;
}