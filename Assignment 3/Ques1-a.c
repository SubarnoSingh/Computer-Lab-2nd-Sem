#include <stdio.h>

int main() {
    int limit, first = 0, second = 1, next;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d:\n", limit);
    while (first <= limit) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}
