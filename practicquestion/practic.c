#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr; // Pointer to hold the base address of the array
    int n, i;

    // Ask the user for the initial size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for 'n' integers
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit if memory allocation fails
    }

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements entered by the user
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask if the user wants to resize the array
    printf("Enter new size for the array: ");
    int newSize;
    scanf("%d", &newSize);

    // Resize the array using realloc
    arr = (int *)realloc(arr, newSize * sizeof(int));
    if (arr == NULL) {
        printf("Reallocation failed.\n");
        return 1; // Exit if reallocation fails
    }

    // If new size is larger, ask for additional elements
    if (newSize > n) {
        printf("Enter %d more elements:\n", newSize - n);
        for (i = n; i < newSize; i++) {
            scanf("%d", &arr[i]);
        }
    }

    // Display all elements in the resized array
    printf("All elements in the resized array:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d ",*(arr+i));
    }
    printf("\n");

    // Free the allocated memory
    free(arr);
    
    return 0;
}
