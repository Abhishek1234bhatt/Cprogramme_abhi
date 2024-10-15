#include <stdio.h>

int main() {
    int A, B, sum;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &A);

    printf("Enter second number: ");
    scanf("%d", &B);

    // Adding the numbers
    sum = A + B;

    // Outputting the result
    printf("The sum of %d and %d is: %d\n", A, B, sum);

    return 0;
}
