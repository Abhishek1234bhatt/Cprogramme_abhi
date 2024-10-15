#include <stdio.h>

int main() {
    FILE *filePointer;
    char dataToWrite[100];
    
    // Writing to a file
    filePointer = fopen("output.txt", "w");  // Open file in write mode
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return 1;  // Return an error code
    }

    // Get user input to write to the file
    printf("Enter some text to write to the file: ");
    fgets(dataToWrite, sizeof(dataToWrite), stdin);  // Read a line of text

    fprintf(filePointer, "%s", dataToWrite);  // Write to the file
    fclose(filePointer);  // Close the file

    printf("Data written to the file successfully.\n");

    // Reading from a file
    char readData[100];
    
    filePointer = fopen("output.txt", "r");  // Open file in read mode
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return 1;  // Return an error code
    }

    // Read data from the file
    printf("Data read from the file:\n");
    while (fgets(readData, sizeof(readData), filePointer) != NULL) {
        printf("%s", readData);  // Print each line read
    }

    fclose(filePointer);  // Close the file

    return 0;
}
