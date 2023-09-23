#include "data_header.h"

FILE *fptr = NULL;
FILE *fptr2 = NULL;
FILE *exist = NULL;

void savefile()
{
    char folder_path[100];
    char file_name[100];
    char ch;

    printf("Enter folder path where you want to save the file: ");
    gets(folder_path);
    gets(folder_path);

    // Clear the input buffer
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;

    // Open the source file for reading
    FILE *fptr = fopen("data.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening the source file for reading\n");
        return;
    }

    printf("Enter file name (without extension): ");
    gets(file_name);
    gets(file_name);

    // Add the ".txt" extension to the file name
    char complete_path[200];
    snprintf(complete_path, sizeof(complete_path), "%s\\%s.txt", folder_path, file_name);

    // Open the destination file for writing
    FILE *fptr2 = fopen(complete_path, "w");

    if (fptr2 == NULL)
    {
        printf("Error creating/appending the file\n");
        perror("fopen");
        fclose(fptr); // Close the source file before returning
        return;
    }

    // Copy the contents of the source file to the destination file
    while ((ch = fgetc(fptr)) != EOF)
    {
        fputc(ch, fptr2);
    }

    // Close both files
    fclose(fptr);
    fclose(fptr2);

    printf("File saved successfully as %s\n", complete_path);
}

void existing_file()
{
    char folder_path[100];
    char file_name[100];
    printf("Enter folder path from where you want to open the file: ");
    fgets(folder_path, sizeof(folder_path), stdin);
    folder_path[strcspn(folder_path, "\n")] = '\0'; // Remove the newline character

    printf("Enter file name (without extension): ");
    fgets(file_name, sizeof(file_name), stdin);
    file_name[strcspn(file_name, "\n")] = '\0'; // Remove the newline character

    // Add the ".txt" extension to the file name
    strcat(file_name, ".txt");

    // Combine folder path and file name to create the complete file path
    char complete_path[200];
    snprintf(complete_path, sizeof(complete_path), "%s\\%s", folder_path, file_name); // Use "\\" for Windows paths

    FILE *exist = fopen(complete_path, "r"); // Open the existing file for reading

    if (exist == NULL)
    {
        printf("Error opening '%s' for reading.\n", file_name);
        exit(1);
    }

    char data_read[1024];

    while (fgets(data_read, sizeof(data_read), exist) != NULL)
    {
        printf("%s", data_read); // Print the line to the console
    }

    fclose(exist);
}

void edit_existing_file()
{
    char folder_path[100];
    char file_name[100];

    printf("Enter folder path where the file is located: ");

    gets(folder_path);
    gets(folder_path);

    printf("Enter file name (without extension): ");
    gets(file_name);
    gets(file_name);

    // Combine folder path and file name to create the complete file path
    char complete_path[200];
    snprintf(complete_path, sizeof(complete_path), "%s\\%s.txt", folder_path, file_name); // Use "\\" for Windows paths

    FILE *fptr = fopen("data.txt", "r"); // Open the default file "data.txt" for reading

    if (fptr == NULL)
    {
        printf("Error opening 'data.txt' for reading.\n");
        fclose(exist); // Close the existing file
        exit(1);
    }

    FILE *exist = fopen(complete_path, "r+"); // Open the existing file for reading and writing

    if (exist == NULL)
    {
        perror("fopen");
        exit(1);
    }

    char writing_data[1024];

    // Read content from "data.txt" and write it to the existing file
    while (fgets(writing_data, sizeof(writing_data), fptr) != NULL)
    {
        // Write the content from "data.txt" to the existing file
        fputs(writing_data, exist);
    }

    fclose(exist);
    fclose(fptr);

    printf("File '%s' has been edited and saved with content from 'data.txt'.\n", file_name);
}
