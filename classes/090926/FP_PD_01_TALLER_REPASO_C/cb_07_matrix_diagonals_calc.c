/**
 * @file cb_07_matrix_diagonals_calc.c
 * @brief Practice exercise to manipulate and analyze matrix diagonals in C.
 * @author Johan Leal
 * @date 2026-09-13
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MATRIX_SIZE 3
int matrix[MATRIX_SIZE][MATRIX_SIZE];

void compare_matrix_diagonals (int size){
    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;
    int j = size-1;

    for (int i = 0; i < size; i++){
        primary_diagonal_sum += matrix[i][i];
        secondary_diagonal_sum += matrix[i][j];
        j--;
    }

    printf("The sum of primary diagonal is %d, The sum of secondary diagonal is %d\n", primary_diagonal_sum, secondary_diagonal_sum);
    if (primary_diagonal_sum > secondary_diagonal_sum){
        printf("The sum primary diagonal is greater.\n");
    }else{
        printf("The sum secondary diagonal is greater.\n");
    }
}

int main(){
    srand(time(NULL));
    for (int i = 0; i < MATRIX_SIZE; i++){
        for (int j = 0; j < MATRIX_SIZE; j++){
            matrix[i][j] = rand() % 100;
        }
    }

    compare_matrix_diagonals (MATRIX_SIZE);
    return 0;
}