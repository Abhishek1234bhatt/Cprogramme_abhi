#include <stdio.h>

int main() {
    int number;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    // Check if the number is even or odd
    if (number != 0) { // Only check even/odd if the number is not zero
        if (number % 2 == 0) {
            printf("%d is an even number.\n", number);
        } else {
            printf("%d is an odd number.\n", number);
        }
    }

    return 0;
}
