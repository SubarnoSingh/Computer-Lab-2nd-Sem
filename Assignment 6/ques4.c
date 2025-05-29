#include <stdio.h>

int findElement(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index if the element is found
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int arr[100], size, target, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    position = findElement(arr, size, target);

    if (position != -1) {
        printf("Element %d found at position %d (index %d).\n", target, position + 1, position);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
