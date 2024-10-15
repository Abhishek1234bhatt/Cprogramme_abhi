#include <stdio.h>

int main() {
    char name[50];  // Declare a char array of size 50 to store a string

    // Taking input from the user
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Read a string including spaces

    // Printing the string
    printf("Hello, %s", name);

    return 0;
}
