#include <stdio.h>

// Function to check if a number is Fibonacci
int isFibonacci(int num) {
    int a = 0, b = 1, c = a + b;
    if (num == 0 || num == 1)
        return 1;
    while (c <= num) {
        if (c == num)
            return 1;
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}

int main() {
    int limit, i;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Non-Fibonacci numbers up to %d:\n", limit);
    for (i = 0; i <= limit; i++) {
        if (!isFibonacci(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
