#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_COURSES 3
#define MAX_NAME_LENGTH 50
#define MAX_REG_NUMBER_LENGTH 50
#define MAX_COURSE_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    char courses[MAX_COURSES][MAX_COURSE_NAME_LENGTH];
    char regNumber[MAX_REG_NUMBER_LENGTH];
} Student;

Student students[MAX_STUDENTS];
int numStudents = 0;

void displayStudent(Student s) {
    printf("Student Name: %s\n", s.name);
    printf("Registration Number: %s\n", s.regNumber);
    printf("Courses: %s, %s, %s\n", s.courses[0], s.courses[1], s.courses[2]);
}

void getStudentDetails(Student *s) {
    printf("Enter student name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = 0; 

    printf("Enter registration number: ");
    fgets(s->regNumber, sizeof(s->regNumber), stdin);
    s->regNumber[strcspn(s->regNumber, "\n")] = 0; 

    for(int i = 0; i < MAX_COURSES; i++) {
        printf("Enter course %d: ", i+1);
        fgets(s->courses[i], sizeof(s->courses[i]), stdin);
        s->courses[i][strcspn(s->courses[i], "\n")] = 0; // remove newline character
    }
}

void editStudentDetails(Student *s) {
    int choice;
    printf("Do you want to edit details? (1-Yes, 0-No): ");
    scanf("%d", &choice);
    getchar(); 

    if(choice == 1) {
        getStudentDetails(s);
    }
}

int main() {
    while(1) {
        printf("1. Add student\n");
        printf("2. Display all students\n");
        printf("3. Edit student details\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);
        getchar(); 

        if(choice == 1) {
            if(numStudents >= MAX_STUDENTS) {
                printf("Cannot add more students.\n");
                continue;
            }
            getStudentDetails(&students[numStudents]);
            numStudents++;
        } else if(choice == 2) {
            for(int i = 0; i < numStudents; i++) {
                displayStudent(students[i]);
            }
        } else if(choice == 3) {
            printf("Enter the index of the student to edit (0-%d): ", numStudents-1);
            int index;
            scanf("%d", &index);
            getchar(); 
            if(index < 0 || index >= numStudents) {
                printf("Invalid index.\n");
                continue;
            }
            editStudentDetails(&students[index]);
        } else if(choice == 4) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
