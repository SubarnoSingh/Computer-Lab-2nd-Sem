#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the height: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = n; j > i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
