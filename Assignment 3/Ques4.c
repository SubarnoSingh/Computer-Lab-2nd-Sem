#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    int nCr, nPr;

    printf("Enter n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    if(n < r) {
        printf("Invalid input: n must be >= r\n");
        return 1;
    }

    nCr = factorial(n) / (factorial(r) * factorial(n - r));
    nPr = factorial(n) / factorial(n - r);

    printf("nCr = %d\n", nCr);
    printf("nPr = %d\n", nPr);

    return 0;
}
