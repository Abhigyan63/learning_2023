#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseAndInitialize(char* inputString, struct Student* students, int numStudents) {
    char* token;

    token = strtok(inputString, " ");
    for (int i = 0; i < numStudents; i++) {
        students[i].rollno = atoi(token);
        token = strtok(NULL, " ");
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        token = strtok(NULL, " ");
        students[i].marks = atof(token);
        token = strtok(NULL, " ");
    }
}

int main() {
    int numStudents;
    char inputString[100];
    struct Student* students;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar();  // Clear the newline character from the input buffer

    // Dynamically allocate memory for the array of students
    students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    printf("Enter the input string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';  // Remove the trailing newline character

    parseAndInitialize(inputString, students, numStudents);

    // Print the initialized array of structures
    printf("\nStudent Data:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    // Free dynamically allocated memory
    free(students);

    return 0;
}
