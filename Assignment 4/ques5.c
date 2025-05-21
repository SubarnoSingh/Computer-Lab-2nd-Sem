#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;

    printf("Enter values of n and r: ");
    scanf("%d %d", &n, &r);

    if (n < r || n < 0 || r < 0) {
        printf("Invalid input. Ensure that 0 <= r <= n.\n");
    } else {
        printf("nCr (%dC%d) = %d\n", n, r, nCr(n, r));
        printf("nPr (%dP%d) = %d\n", n, r, nPr(n, r));
    }

    return 0;
}
