#include <stdio.h>

int main() {
    int num = 10;    // Declare an integer variable
    int *ptr;        // Declare a pointer to an integer

    // Assign the address of 'num' to the pointer 'ptr'
    ptr = &num;

    // Printing the value and address of 'num' using the pointer
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);    // Printing the address of num directly
    printf("Value of num using pointer: %d\n", *ptr);   // Dereferencing the pointer to get the value of num
    printf("Address stored in pointer: %p\n", ptr);     // Address stored in pointer 'ptr'

    return 0;
}
