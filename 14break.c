#include <stdio.h>

int main() {
    int i;

    // Loop to find the first number greater than 5
    for (i = 1; i <= 10; i++) {
        if (i > 5) {
            printf("The first number greater than 5 is: %d\n", i);
            break;  // Exit the loop when the condition is met
        }
    }

    return 0;
}
