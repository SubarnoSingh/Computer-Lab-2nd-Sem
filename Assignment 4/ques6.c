#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, rem;

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }

    return decimal;
}


int decimalToBinary(int decimal) {
    int binary = 0, base = 1, rem;

    while (decimal > 0) {
        rem = decimal % 2;
        binary += rem * base;
        decimal /= 2;
        base *= 10;
    }

    return binary;
}

int main() {
    int choice, num;

    printf("Choose conversion:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &num);
        printf("Decimal: %d\n", binaryToDecimal(num));
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        printf("Binary: %d\n", decimalToBinary(num));
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
