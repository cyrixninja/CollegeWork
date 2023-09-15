// Perform the various string operations using  user-defined functions
// ● Length of the string
// ● Copy one string to another
// ● Reverse the string
// ● Concate the string
// ● Find the substring
// ● Compare two strings

#include <stdio.h>
#include <string.h>

// Function to calculate the length of a string
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to copy one string to another
void stringCopy(const char *source, char *destination) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

// Function to reverse a string
void stringReverse(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// Function to concatenate two strings
void stringConcatenate(char *destination, const char *source) {
    int destLength = strlen(destination);
    int i = 0;
    while (source[i] != '\0') {
        destination[destLength + i] = source[i];
        i++;
    }
    destination[destLength + i] = '\0';
}

// Function to find a substring in a string
int findSubstring(const char *str, const char *sub) {
    int strLength = strlen(str);
    int subLength = strlen(sub);
    for (int i = 0; i <= strLength - subLength; i++) {
        int j;
        for (j = 0; j < subLength; j++) {
            if (str[i + j] != sub[j]) {
                break;
            }
        }
        if (j == subLength) {
            return i;
        }
    }
    return -1; // Substring not found
}

// Function to compare two strings
int compareStrings(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return (*str1 - *str2);
        }
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main() {
    char str1[100], str2[100], temp[100];
    printf("Enter a string: ");
    scanf("%s", str1); // Read a single word using scanf

    // Calculate and display the length of the string
    int length = stringLength(str1);
    printf("Length of the string: %d\n", length);

    // Copy the string to another
    stringCopy(str1, str2);
    printf("Copied string: %s\n", str2);

    // Reverse the string
    stringCopy(str1, temp);
    stringReverse(temp);
    printf("Reversed string: %s\n", temp);

    // Concatenate two strings
    printf("Enter another string to concatenate: ");
    scanf("%s", str2); // Read another single word using scanf
    stringConcatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Find a substring in the string
    printf("Enter a substring to find: ");
    scanf("%s", str2); // Read a single word using scanf
    int position = findSubstring(str1, str2);
    if (position != -1) {
        printf("Substring found at position %d\n", position);
    } else {
        printf("Substring not found\n");
    }

    // Compare two strings
    printf("Enter another string to compare: ");
    scanf("%s", str2); // Read another single word using scanf
    int result = compareStrings(str1, str2);
    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2\n");
    } else {
        printf("String 1 is greater than String 2\n");
    }

    return 0;
}