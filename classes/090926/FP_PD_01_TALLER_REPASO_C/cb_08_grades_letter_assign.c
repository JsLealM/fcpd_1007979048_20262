/**
 * @file cb_08_grades_letter_assign.c
 * @brief Practice exercise using nested conditionals and logical operators to assign letter grades in C.
 * @author Johan Leal
 * @date 2026-09-13
 */

#include <stdio.h>

char assign_letter_grade(int grade){
    if (grade >= 90){
        return 'A';
    }else if (grade >= 80){
        return 'B';
    }else if (grade >= 70){
        return 'C';
    }else if (grade >= 60){
        return 'D';
    }else{
        return 'F';
    }
}

int main(){
    int grade = 100;
    char letter_grade = assign_letter_grade(grade);
    printf("The grade is %d corresponds to an %c\n", grade, letter_grade);
    return 0;
}