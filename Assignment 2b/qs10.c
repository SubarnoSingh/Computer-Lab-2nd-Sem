#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (i * (i + 1)) / 2;
    }

    printf("The value of the series is: %d\n", sum);

    return 0;
}
