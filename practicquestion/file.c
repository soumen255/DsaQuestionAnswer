#include <stdio.h>

int main() {
    char wyw;
    printf("Enter the mode: Write (a+) | Read (r): ");
    scanf(" %c", &wyw); // Added space before %c to consume leftover newline

    FILE *file = NULL;

    // Open file based on user input
    if (wyw == 'r') {
        file = fopen("example.txt", "r");
        if (file == NULL) {
            printf("Error: Could not open file for reading.\n");
            return 1;
        }
        printf("Reading from the file:\n");
        char ch;
        while ((ch = fgetc(file)) != EOF) {
            printf("%c", ch);
        }
        fclose(file);
    } else if (wyw == 'a') {
        file = fopen("example.txt", "a+");
        if (file == NULL) {
            printf("Error: Could not open file for writing.\n");
            return 1;
        }
        printf("Enter text to write to the file (type END to stop):\n");
        char input[100];
        getchar();
        fgets(input,100,stdin);
        fprintf(file,"%s",input);

        fclose(file);
        printf("Writing to the file completed.\n");
    } else {
        printf("Invalid option selected.\n");
    }

    return 0;
}
