/**
 * @file cb_09_dynamic_array_sum.c
 * @brief Practice exercise allocating dynamic memory for an array to calculate its sum in C.
 * @author Johan Leal
 * @date 2026-09-13
 */

#include <stdio.h>
#include <stdlib.h>

int array_sum (int size, int *arr){
    int sum = 0;
    for(int i = 0; i < size ; i++){
        sum += *arr;
        arr++;
    }
    return sum;
}

int main(){
    int size;
    printf("How many elements does the array require: ");
    scanf("%d", &size);

    int *array = (int *) malloc(size * sizeof(int));

    if (array == NULL){
        printf("Error reserving memory.\n");
        return 1;
    }

    for(int i = 0; i < size; i++){
        printf("Enter an integer: ");
        scanf("%d", &array[i]);
    }

    printf("The sum of all the elements is: %d\n", array_sum(size, array));

    free(array);
    array = NULL;
    return 0;
}