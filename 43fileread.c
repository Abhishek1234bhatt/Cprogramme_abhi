#include <stdio.h>

int main() {
    FILE *filePointer;
    char fileName[100];
    char readData[256];  // Buffer to hold each line of the file

    // Prompt the user for the file name
    printf("Enter the name of the file to read: ");
    scanf("%s", fileName);

    // Open the file in read mode
    filePointer = fopen(fileName, "r");
    if (filePointer == NULL) {
        printf("Error opening file '%s'.\n", fileName);
        return 1;  // Exit with an error code
    }

    // Read and print the contents of the file
    printf("Contents of the file:\n");
    while (fgets(readData, sizeof(readData), filePointer) != NULL) {
        printf("%s", readData);  // Print each line read
    }

    fclose(filePointer);  // Close the file
    return 0;  // Successful execution
}
