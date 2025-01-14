#include<stdio.h>

int main(){
    FILE *file = fopen("example.txt", "r");
char ch;
if (file != NULL) {
    ch = fgetc(file);
    printf("Character read: %c\n", ch);
    fclose(file);
}

}