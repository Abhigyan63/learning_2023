#include <stdio.h>
#include <ctype.h>
#include <string.h>

void changeCase(FILE *sourceFile, FILE *targetFile, int caseOption) {
    char ch;
    int inWord = 0;  // Flag to track word boundaries

    while ((ch = fgetc(sourceFile)) != EOF) {
        if (caseOption == 1) {  // Upper case option
            ch = toupper(ch);
        } else if (caseOption == 2) {  // Lower case option
            ch = tolower(ch);
        } else if (caseOption == 3) {  // Sentence case option
            if (inWord == 0 && islower(ch)) {
                ch = toupper(ch);
            } else if (inWord == 1 && isupper(ch)) {
                ch = tolower(ch);
            }
            inWord = isalnum(ch) || ch == '\'' || ch == '-' || ch == '_';
        }

        fputc(ch, targetFile);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        return 1;
    }

    FILE *sourceFile, *targetFile;
    int caseOption = 0;

    // Open the source file in read mode
    sourceFile = fopen(argv[2], "r");
    if (sourceFile == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    // Determine the case option based on the user input
    if (argc > 3) {
        if (strcmp(argv[1], "-u") == 0) {
            caseOption = 1;  // Upper case
        } else if (strcmp(argv[1], "-l") == 0) {
            caseOption = 2;  // Lower case
        } else if (strcmp(argv[1], "-s") == 0) {
            caseOption = 3;  // Sentence case
        }
    }

    // Open the target file in write mode
    targetFile = fopen(argv[3], "w");
    if (targetFile == NULL) {
        printf("Unable to create target file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Perform the file copying with case handling
    changeCase(sourceFile, targetFile, caseOption);

    // Close the files
    fclose(sourceFile);
    fclose(targetFile);

    printf("File copied successfully with case handling.\n");

    return 0;
}
