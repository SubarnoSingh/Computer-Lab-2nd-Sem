#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student s[3];
    int i, maxIndex = 0;

    for(i = 0; i < 3; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", s[i].name, &s[i].marks);
    }

    for(i = 1; i < 3; i++) {
        if(s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s, Marks: %d\n", s[maxIndex].name, s[maxIndex].marks);

    return 0;
}
