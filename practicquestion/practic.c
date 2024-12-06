#include <stdio.h>

int main() {
    FILE *fp = fopen("text.txt", "w"); // Open for reading
    if (fp == NULL) {
        printf("File not found or unable to open.\n");
        return 1;
    }
 char str[100] = "Soumen Bhandari\n";
    fputs(str, fp);
    fclose(fp); // Close the file after writing
    char ch;
    printf("Contents of the file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch); // Print each character to the console
    }
    fclose(fp); // Close the file
    return 0;
}
