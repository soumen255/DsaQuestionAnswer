#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Reads a string from the user (with spaces)
    printf("You entered: %s\n", str);
    return 0;
}
