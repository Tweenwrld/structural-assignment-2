#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "leonard.txt"; 

    // Opens the file for both reading and writing 
    file = fopen(filename, "w+");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Writing data to the file
    fprintf(file, "Hello, this is some sample data!\n");

    // Rewind the file pointer to the beginning
    rewind(file);

    // Reading data from the file
    char buffer[100];
    fread(buffer, sizeof(char), 100, file);
    printf("Read from file: %s\n", buffer);

    // Close the file
    fclose(file);

    return 0;
}
