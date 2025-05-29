#include <stdio.h>

// Define a structure for a coordinate point
struct Point {
    float x;
    float y;
};

int main() {
  
    struct Point point1 = {3.5, 7.2};

    
    struct Point point2;

    // Take input for the second point
    printf("Enter x and y coordinates for the second point:\n");
    printf("x: ");
    scanf("%f", &point2.x);
    printf("y: ");
    scanf("%f", &point2.y);

  
    printf("\nFirst Point: (%.2f, %.2f)\n", point1.x, point1.y);
    printf("Second Point: (%.2f, %.2f)\n", point2.x, point2.y);

    return 0;
}
