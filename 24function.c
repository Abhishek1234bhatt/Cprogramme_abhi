
#include <stdio.h>

// Function declaration
int addNumbers(int a, int b);

int main() {
    int num1, num2, sum;

    // Taking input from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calling the addNumbers function and storing the result in sum
    sum = addNumbers(num1, num2);

    // Printing the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    return a + b;  // Return the sum of a and b
}
