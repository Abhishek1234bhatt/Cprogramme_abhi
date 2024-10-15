#include <stdio.h>

int main() {
    int number;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Using if to check if the number is positive
    if (number > 0) {
        printf("%d is a positive number.\n", number);
    }

    return 0;
}
