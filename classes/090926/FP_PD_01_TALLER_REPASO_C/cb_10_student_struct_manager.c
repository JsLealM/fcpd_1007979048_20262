/**
 * @file cb_10_student_struct_manager.c
 * @brief Practice exercise implementing a student management system using structures and dynamic memory in C.
 * @author Johan Leal
 * @date 2026-09-13
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[20];
    float grade[3];
    float average;
} Student;

void average_student (Student *student){
    student-> average = 0;
    int size = sizeof(student->grade)/sizeof(student->grade[0]);
    float sum_grades = 0;
    for (int i = 0; i < size; i++){
        sum_grades += student->grade[i];
    }
    student->average = sum_grades/size;

    printf("The Student %s has a grade point average of %.2f\n", student->name, student->average);
}

void print_approved (Student *students, int size, float approved_grade){
    printf("Students who approved:\n");
    for (int i = 0; i < size; i++){
        if(students[i].average >= approved_grade){
            printf("Student: %s with average %.2f\n", students[i].name, students[i].average);
        }
    }
}

int main(){

    int size;
    printf("How many students do you want to add: ");
    scanf("%d", &size);

    Student *students = (Student *) malloc(size * sizeof(Student));

    if (students == NULL){
        printf("Error reserving memory\n");
        return 1;
    }

    for(int i = 0; i < size; i++){
        students[i].id = i + 1;
        printf("Student %d\n",i+1);
        printf("Name: ");
        scanf(" %19s", students[i].name);

        for(int j = 0; j < sizeof(students[i].grade)/sizeof(students[i].grade[0]); j++){
            printf("Grade %d: ", j+1);
            scanf("%f", &students[i].grade[j]);
        }
        average_student(&students[i]);
    }

    print_approved(students,size,3.0);
    free(students);
    students=NULL;
    return 0;
}