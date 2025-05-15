#include <stdio.h>

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Binary to Decimal
        long binary;
        int decimal = 0, base = 1, rem;

        printf("Enter a binary number: ");
        scanf("%ld", &binary);

        while (binary > 0) {
            rem = binary % 10;
            decimal = decimal + rem * base;
            binary = binary / 10;
            base = base * 2;
        }

        printf("Decimal equivalent: %d\n", decimal);

    } else if (choice == 2) {
        // Decimal to Binary
        int decimal, binary[32], i = 0;

        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        if (decimal == 0) {
            printf("Binary equivalent: 0\n");
        } else {
            while (decimal > 0) {
                binary[i] = decimal % 2;
                decimal = decimal / 2;
                i++;
            }

            printf("Binary equivalent: ");
            for (int j = i - 1; j >= 0; j--) {
                printf("%d", binary[j]);
            }
            printf("\n");
        }

    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
