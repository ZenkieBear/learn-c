#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i & 1)
            printf("%d is odd number.\n", i);
        else
            printf("%d is even number.\n", i);
    }
    return 0;
}