#include <stdio.h>

int main() {
    int a = 6, b = 8;

    // Logical AND (&&)
    if (a > 5 && b < 10) {
        printf("Both conditions are true: a > 5 and b < 10\n");
    }

    // Logical OR (||)
    if (a > 5 || b > 10) {
        printf("At least one condition is true: a > 5 or b > 10\n");
    }

    // Logical NOT (!)
    if (!(a == 6)) {
        printf("a is NOT equal to 6\n");
    } else {
        printf("a is equal to 6\n");
    }

    return 0;
}
