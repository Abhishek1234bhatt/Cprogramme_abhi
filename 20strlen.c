#include <stdio.h>
#include <string.h>  // Include the string.h library for strlen

int main() {
    char str[100];  // Declare a char array of size 100
    int length;

    // Taking input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read a string including spaces

    // Calculate the length of the string
    length = strlen(str) - 1;  // Subtract 1 to exclude the newline character

    // Print the length of the string
    printf("The length of the string is: %d\n", length);

    return 0;
}
