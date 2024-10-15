#include <stdio.h>

// Declaration of a function that is not defined
void undefinedFunction();

int main() {
    undefinedFunction();  // This will cause a linker error
    return 0;
}
