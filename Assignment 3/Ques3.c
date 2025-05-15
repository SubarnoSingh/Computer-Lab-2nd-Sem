#include <stdio.h>
#include <math.h>

// Function to convert decimal to binary
void decimalToBinary(int n) {
    int binary[32], i = 0;

    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }

    while(n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Function to convert binary to decimal
int binaryToDecimal(int n) {
    int decimal = 0, base = 1, rem;

    while(n > 0) {
        rem = n % 10;
        decimal += rem * base;
        base *= 2;
        n /= 10;
    }

    return decimal;
}

int main() {
    int choice, num;

    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter decimal number: ");
        scanf("%d", &num);
        decimalToBinary(num);
    } else if(choice == 2) {
        printf("Enter binary number: ");
        scanf("%d", &num);
        printf("Decimal: %d\n", binaryToDecimal(num));
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
