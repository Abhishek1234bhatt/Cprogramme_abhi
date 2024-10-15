#include <stdio.h>

// Function that uses a static variable
void staticDemo() {
    static int count = 0;  // Static variable declaration
    count++;  // Increment the static variable
    printf("Count is: %d\n", count);
}

int main() {
    // Calling the function multiple times
    staticDemo();
    staticDemo();
    staticDemo();
    
    return 0;
}
