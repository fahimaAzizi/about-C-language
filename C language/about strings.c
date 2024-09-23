#include <stdio.h>
#include <string.h>

int main() {
    // 1. Declaring and initializing strings
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[40];

    // 2. Printing strings
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    // 3. Concatenating strings
    strcpy(str3, str1);        // Copy str1 into str3
    strcat(str3, " ");         // Concatenate a space to str3
    strcat(str3, str2);        // Concatenate str2 to str3

    printf("Concatenated String: %s\n", str3);

    // 4. Finding the length of a string
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));
    printf("Length of concatenated string: %lu\n", strlen(str3));

    // 5. Comparing strings
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }

    // 6. Copying one string into another
    strcpy(str1, str2);
    printf("After copying, str1: %s\n", str1);

    return 0;
}
