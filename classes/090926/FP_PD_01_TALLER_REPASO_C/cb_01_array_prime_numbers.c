/**
 * @file cb_01_array_prime_numbers.c
 * @brief Basic Exercise of Array Prime Numbers in C.
 * @author Johan Leal
 * @date 2026-09-13
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ARRAY_SIZE 5
int numbers[ARRAY_SIZE];


bool prime_numbers(int number){
    int sum_divisions = 0;

    if (number == 2){
        return true;
    }

    if (number % 2 == 0 || number == 1){
        return false;
    }
    
    for (int i = 3; i <= number; i = i + 2){
        if ( number % i == 0){
            sum_divisions += 1;
        }
        if (sum_divisions > 1){
            return false;
        }
    }
    return true;
}


int array_prime_numbers (int size){
    int prime_number_counter = 0;
    for (int i = 0; i < size; i++){
        if (prime_numbers(numbers[i])){
            prime_number_counter += 1;
        }
        printf("%d = %d\n", numbers[i], prime_numbers(numbers[i]));
    }
    return prime_number_counter;
}


int main (){
    srand(time(NULL));

    for(int i = 0; i < ARRAY_SIZE; i++){
        numbers[i] = rand();
    }

    int prime_number = array_prime_numbers (ARRAY_SIZE);
    printf("Prime numbers in the array: %d\n", prime_number);
    return 0;
}