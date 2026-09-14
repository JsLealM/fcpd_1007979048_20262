/**
 * @file cb_02_exchanging_values_pointers.c
 * @brief Basic Exercise of Exchanging Values with Pointers in C.
 * @author Johan Leal
 * @date 2026-09-13
 */

#include <stdio.h>

void swape (int number_a, int number_b){
    printf("###ADDRESS OF THE POINTERS###\n");

    int *ptr_number_a = &number_a, *ptr_number_b = &number_b;

    printf("Pointer Number A: %p and Values: %d\n", ptr_number_a, *ptr_number_a);
    printf("Pointer Number B: %p and Values: %d\n", ptr_number_b, *ptr_number_b);

    int temp = *ptr_number_a;
    *ptr_number_a = *ptr_number_b;
    *ptr_number_b = temp; 

    printf("###After the Swape###\n");
    printf("Pointer Number A: %p and Values: %d\n", ptr_number_a, *ptr_number_a);
    printf("Pointer Number B: %p and Values: %d\n", ptr_number_b, *ptr_number_b);

}

int main(){
    swape(11, 12);
    return 0;
}