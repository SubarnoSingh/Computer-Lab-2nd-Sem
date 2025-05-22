#include <stdio.h>
#define MAX_SIZE 100

void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertElement(int arr[], int size, int element, int position) {
    // Check if position is valid
    if (position < 0 || position > size) {
        printf("Error: Invalid position! Position should be between 0 and %d\n", size);
        return size; // Return original size without insertion
    }
    
    // Check if array has space
    if (size >= MAX_SIZE) {
        printf("Error: Array is full! Cannot insert more elements.\n");
        return size;
    }
    
    // Shift elements to the right from the insertion position
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the new element at the specified position
    arr[position] = element;
    
    return size + 1; // Return new size
}

int main() {
    int arr[MAX_SIZE];
    int size, element, position;
    
    printf("Enter the initial size of array: ");
    scanf("%d", &size);
    
    // Validate initial size
    if (size < 0 || size > MAX_SIZE) {
        printf("Invalid size! Size should be between 0 and %d\n", MAX_SIZE);
        return 1;
    }
    
    // Input array elements
    if (size > 0) {
        printf("Enter %d elements:\n", size);
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }
    }
    
    // Display original array
    printf("\nOriginal ");
    displayArray(arr, size);
    
    // Get element and position for insertion
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
    printf("Enter the position to insert (0-based indexing, 0 to %d): ", size);
    scanf("%d", &position);
    
    // Insert element and update size
    int newSize = insertElement(arr, size, element, position);
    
    // Display result
    if (newSize > size) {
        printf("\nElement %d inserted successfully at position %d\n", element, position);
        printf("Updated ");
        displayArray(arr, newSize);
    } else {
        printf("Insertion failed!\n");
    }
    
    return 0;
}
