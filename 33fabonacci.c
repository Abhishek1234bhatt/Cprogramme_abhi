#include <stdio.h>

// Function to calculate Fibonacci series using recursion
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main() {
    int n, i;

    // Taking input from the user
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    // Printing the Fibonacci series
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
