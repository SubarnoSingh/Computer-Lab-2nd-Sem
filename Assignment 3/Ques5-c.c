#include <stdio.h>

int main() {
    int i, j, space;
    for (i = 1; i <= 4; i++) {

        for (space = 1; space <= 4 - i; space++) {
            printf(" ");
        }

        
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("%d", i);
        }

        printf("\n\n"); 
    }
    return 0;
}
