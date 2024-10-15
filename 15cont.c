#include <stdio.h>

int main() {
    int i;

    // Loop to print numbers from 1 to 10, skipping 5
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Skip the rest of the loop when i is 5
        }
        printf("%d\n", i);  // Print the current number
    }

    return 0;
}
