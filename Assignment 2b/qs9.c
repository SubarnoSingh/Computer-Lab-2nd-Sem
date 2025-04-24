#include <stdio.h>
#include <math.h>

int main() {
    int x, n;
    int sum = 1;  
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += pow(x, i);
    }

    printf("The value of the series is: %d\n", sum);
    
    return 0;
}