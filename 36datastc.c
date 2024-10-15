#include <stdio.h>
#include <string.h>

// Defining a structure to hold student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    // Declaring a structure variable
    struct Student student1;

    // Assigning values to the structure members
    student1.rollNumber = 101;
    strcpy(student1.name, "Abhishek Bhatt");  // Using strcpy to assign string to name
    student1.marks = 85.5;

    // Printing the student information
    printf("Student Roll Number: %d\n", student1.rollNumber);
    printf("Student Name: %s\n", student1.name);
    printf("Student Marks: %.2f\n", student1.marks);

    return 0;
}
