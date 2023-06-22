#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStudents(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        students[i].rollno = 0;
        students[i].name[0] = '\0';
        students[i].marks = 0.0;
    }
}

int main() {
    int size;
    
    printf("Enter the number of students: ");
    scanf("%d", &size);
    
    struct Student students[size];
    
    // Initialize all members in the array of structures
    initializeStudents(students, size); // Print the initialized array of structures
    printf("\nStudent Data:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
