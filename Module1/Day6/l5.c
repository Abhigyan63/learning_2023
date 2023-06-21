#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchStudentByName(struct Student* students, int numStudents, const char* searchName) {
    int found = 0;
    
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student Found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Student with name '%s' not found.\n", searchName);
    }
}

int main() {
    int numStudents;
    
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    
    struct Student students[numStudents];
    
    // Read and initialize the array of structures
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }
    
    // Perform search based on student name
    char searchName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);
    
    searchStudentByName(students, numStudents, searchName);
    
    return 0;
}
