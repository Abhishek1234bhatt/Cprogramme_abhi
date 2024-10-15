#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)  // Base case: 0! = 1 and 1! = 1
        return 1;
    else
        return n * factorial(n - 1);  // Recursive case: n * (n-1)!
}

int main() {
    int num;
    
    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculating and printing the factorial using recursion
    printf("Factorial of %d is: %d\n", num, factorial(num));
    
    return 0;
}
