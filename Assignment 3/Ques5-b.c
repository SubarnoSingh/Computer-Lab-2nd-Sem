#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the height: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        // Print spaces
        for(j = 0; j < i; j++) {
            printf("  ");
        }
        // Print stars
        for(j = 0; j < n - i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
