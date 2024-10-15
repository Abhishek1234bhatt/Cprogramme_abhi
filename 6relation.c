#include <stdio.h>

int main() {
    int a, b;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Demonstrating relational operators
    if (a == b) {
        printf("%d is equal to %d\n", a, b);
    }
    if (a != b) {
        printf("%d is not equal to %d\n", a, b);
    }
    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    }
    if (a < b) {
        printf("%d is less than %d\n", a, b);
    }
    if (a >= b) {
        printf("%d is greater than or equal to %d\n", a, b);
    }
    if (a <= b) {
        printf("%d is less than or equal to %d\n", a, b);
    }

    return 0;
}
