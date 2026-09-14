/**
 * @file cb_05_switch_menu.c
 * @brief Basic Exercise of Inverted Array in C.
 * @author Johan Leal
 * @date 2026-09-07
 */

#include <stdio.h>

void inverted_array (int array[], int size){
    for (int i = size-1; i >= 0; i--){
        if (i != 0){
            printf("%d, ", array[i]);
            continue;
        }
        printf("%d.\n", array[i]);
    }
}

void inverted_array_recursive (int array[], int size){
    if ( size == 1){
        printf("%d.\n", array[size-1]);
        return;
    }
    printf("%d, ", array[size-1]);
    inverted_array_recursive(array, size-1);
}

int main (){
    int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
    inverted_array(numbers, 10);
    printf("Recursive\n");
    inverted_array_recursive(numbers, 10);
    return 0;
}

