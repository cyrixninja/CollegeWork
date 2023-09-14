// Perform the various string operations using  built-in functions
// ● Length of the string
// ● Copy one string to another
// ● Reverse the string
// ● Concate the string
// ● Find the substring
// ● Compare two strings

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];

    // Input a string
    printf("Enter a string: ");
    scanf("%99s", str1); // Limit input to 99 characters to avoid buffer overflow

    // Calculate and display the length of the string
    int length = strlen(str1);
    printf("Length of the string: %d\n", length);

    // Copy the string to another
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    // Reverse the string
    strcpy(temp, str1);
    strrev(temp); // Using strrev function (not standard, available in some compilers)
    printf("Reversed string: %s\n", temp);

    // Concatenate two strings
    printf("Enter another string to concatenate: ");
    scanf("%99s", str2); // Limit input to 99 characters
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Find a substring in the string
    printf("Enter a substring to find: ");
    scanf("%99s", str2); // Limit input to 99 characters
    char *substring = strstr(str1, str2);
    if (substring != NULL) {
        printf("Substring found at position %ld\n", substring - str1);
    } else {
        printf("Substring not found\n");
    }

    // Compare two strings
    printf("Enter another string to compare: ");
    scanf("%99s", str2); // Limit input to 99 characters
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2\n");
    } else {
        printf("String 1 is greater than String 2\n");
    }

    return 0;
}
