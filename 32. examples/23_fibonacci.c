#include <stdio.h>

int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("n is: ");
    scanf("%d", &n);

    printf("Fibonacci:");
    for (int i = 1; i <= n; i++) {
        printf("%d ", t2);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
    return 0;
}