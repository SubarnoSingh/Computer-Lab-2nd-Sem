#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 3

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int i, topIndex = 0;

    printf("Enter details for %d students:\n", MAX_STUDENTS);
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNo);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        // Track index of highest scoring student
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("\nStudent with the highest marks:\n");
    printf("Name: %s\n", students[topIndex].name);
    printf("Roll Number: %d\n", students[topIndex].rollNo);
    printf("Marks: %.2f\n", students[topIndex].marks);

    return 0;
}
