#include <stdio.h>

int main() {
    int numbers[5];  // Declare an array of size 5
    int i;

    // Taking input from the user
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);  // Store each input in the array
    }

    // Printing the values in the array
    printf("You entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
