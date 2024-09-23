
#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // 1. Declare and initialize a fixed-size array
    int fixedArray[5] = {10, 20, 30, 40, 50};
    int size = 5;

    // 2. Access array elements using an index
    printf("Element at index 2: %d\n", fixedArray[2]);

    // 3. Passing an array to a function
    printf("Printing fixed array: ");
    printArray(fixedArray, size);

    // 4. Dynamically allocating an array
    int *dynamicArray = (int *)malloc(size * sizeof(int));

    if (dynamicArray == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 5. Initializing and printing dynamic array
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = (i + 1) * 100;  // Assigning values 100, 200, 300...
    }

    printf("Printing dynamic array: ");
    printArray(dynamicArray, size);

    // 6. Free dynamically allocated memory
    free(dynamicArray);

    return 0;
}
