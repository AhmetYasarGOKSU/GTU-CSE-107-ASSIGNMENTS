#include <stdio.h>

int main() {
    int student_id;
    float gpa;
    char name[50], surname[50];
    
    printf("Type your student ID: ");
    while (1) {
        if (scanf("%d", &student_id) != 1) {
            printf("Student ID must be an integer! \n");
            while (getchar() != '\n'); 
        } else {
            break;
        }
    }

    printf("Type your GPA: ");
    while (1) {
        if (scanf("%f", &gpa) != 1) {
            printf("GPA must be a floating point number! \n");
            while (getchar() != '\n'); 
        } else {
            break;
        }
    }

    printf("Enter your first name: ");
    scanf("%s", name);

    printf("Enter your surname: ");
    scanf("%s", surname);


    printf("\nStudent Information:\n");
    printf("---------------------------------------------\n");
    printf("Student ID\tName\tSurname\tGPA\n");
    printf("---------------------------------------------\n");
    printf("%d\t\t%s\t%s\t%.2f\n", student_id, name, surname, gpa);

    return 0;
}

