#include <stdio.h>


int power(int x, int n) {
    if (n == 0)
        return 1; 
    else
        return x * power(x, n - 1);
}

int main() {
    int base, exponent;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    if (exponent < 0)
        printf("This program does not handle negative exponents.\n");
    else
        printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    return 0;
}
