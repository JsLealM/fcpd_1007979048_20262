/**
 * @file cb_06_inverted_array_pointers.c
 * @brief Basic exercise to reverse an array using pointers in C.
 * @author Johan Leal
 * @date 2026-09-13
 */

#include <stdio.h>

int* inverted_array_pointer (int *arr, int size){
    int *start = arr;
    int *end = arr + (size - 1);
    int temp;

    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    return arr;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int *inverted_array = inverted_array_pointer(array, size);
    
    for (int i = 0; i < size; i++) {
        printf("%d ", *(inverted_array + i));
    }
    printf("\n");
    return 0;
}