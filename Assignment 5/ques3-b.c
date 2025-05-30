#include <stdio.h>

int main() {
    char src[100], dest[100];
    int i = 0;
    printf("Enter a string: ");
    gets(src);
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    printf("Copied string: %s\n", dest);
    return 0;
}
