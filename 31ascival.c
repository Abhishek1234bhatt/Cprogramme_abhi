#include <stdio.h>

int main() {
    char ch;

    // Taking character input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Printing ASCII value of the character
    printf("The ASCII value of '%c' is: %d\n", ch, ch);

    return 0;
}
