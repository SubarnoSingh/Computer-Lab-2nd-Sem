#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the term number n: ");
    scanf("%d", &n);

    if (n == 1)
        printf("The %dth Fibonacci term is: 0\n", n);
    else if (n == 2)
        printf("The %dth Fibonacci term is: 1\n", n);
    else {
        for (i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("The %dth Fibonacci term is: %d\n", n, second);
    }

    return 0;
}
