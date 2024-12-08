#include <stdio.h>

int main() {
    FILE *file = fopen("text.txt", "r");  // Open file in read mode
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    char ch;
    // Read and print characters until end of file (EOF)
    while ((ch = fgetc(file)) != EOF) {
        printf("%c",ch); // Print each character to the console
    }

    fclose(file);  // Close the file
    return 0;
}
