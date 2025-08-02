#include <stdio.h>

int main() {
    FILE *fptr;

    // Writing to a file
    fptr = fopen("example.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fptr, "Hello, this is a file I/O example.\n");
    fclose(fptr);

    // Reading from the file
    char ch;
    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);

    fclose(fptr);
    return 0;
}
