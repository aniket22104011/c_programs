#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char reversed_str[100];
    int i, j;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from fgets
    str[strcspn(str, "\n")] = 0;

    // Calculate the length of the string
    int len = strlen(str);

    // Reverse the string
    for (i = 0, j = len - 1; i < len; i++, j--) {
        reversed_str[i] = str[j];
    }
    reversed_str[len] = '\0';  // Add the null terminator at the end

    // Print the reversed string
    printf("Reversed string: %s\n", reversed_str);

    return 0;
}
