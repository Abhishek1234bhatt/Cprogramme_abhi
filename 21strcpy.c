#include <stdio.h>
#include <string.h>  // Include the string.h library for strcpy

int main() {
    char source[100], destination[100];  // Declare two char arrays

    // Taking input for the source string
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);  // Read the source string

    // Copy the source string into the destination string
    strcpy(destination, source);

    // Print the copied string
    printf("The copied string is: %s", destination);

    return 0;
}
