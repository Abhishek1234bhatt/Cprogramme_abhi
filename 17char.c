#include <stdio.h>

int main() {
    char ch;

    // Taking input from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);  // The space before %c ensures any leading whitespace is ignored

    // Check if the character is a vowel or consonant
    if (ch >= 'A' && ch <= 'Z') {  // Check for uppercase letters
        ch = ch + 'a' - 'A';  // Convert to lowercase for easier comparison
    }

    if (ch >= 'a' && ch <= 'z') {  // Check if it's a letter
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("%c is not a valid alphabet character.\n", ch);
    }

    return 0;
}
