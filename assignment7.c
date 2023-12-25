//file write operation
#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open file in write mode
    filePointer = fopen("example.txt", "w");

    if (filePointer == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    fprintf(filePointer, "Hello, this is a file write operation!\n");

    fclose(filePointer);

    printf("Data written to the file successfully.\n");

    return 0;
}

//File Read Operation:
#include <stdio.h>

int main() {
    FILE *filePointer;
    char buffer[100];

    // Open file in read mode
    filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePointer);

    return 0;
}
//File Append Operation
#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open file in append mode
    filePointer = fopen("example.txt", "a");

    if (filePointer == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    
    fprintf(filePointer, "This data is appended to the file!\n");

    fclose(filePointer);

    printf("Data appended to the file successfully.\n");

    return 0;
}
