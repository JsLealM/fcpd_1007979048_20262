/**
 * @file cb_05_recursive_digit_sum.c
 * @brief Basic exercise implementing a recursive function to sum the digits of a number in C.
 * @author Johan Leal
 * @date 2026-09-13
 */

#include <stdio.h>

int recursive_digit_sum (int number){
    if (number / 10 == 0){
        return number % 10;
    }

    int digit = number % 10;
    return digit + recursive_digit_sum(number/10);
}

int main (){
    printf("The sum of the digits of the number is %d\n", recursive_digit_sum(312341));
    return 0;
}