#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Perfect numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        int sum = 0;

        
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        
        if (sum == num && num != 0) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
