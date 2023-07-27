#include <stdio.h>

int main() {
    int a, b, minMultiple;
    
    printf("Enter two positive number:");
    scanf("%d %d", &a, &b);

    // init
    minMultiple = a > b ? a : b;
    while (1)
    {
        if (minMultiple % a == 0 && minMultiple % b == 0) {
            printf("Minimal multiple is: %d", minMultiple);
            break;
        }
        minMultiple ++;
    }
    
    return 0;
}