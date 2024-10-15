#include <stdio.h>

int main() {
    int a = 10, b = 0;
    int result;

    // Division by zero leads to a runtime error
    result = a / b;  // This will cause a runtime error
    printf("Result: %d\n", result);

    return 0;
}
