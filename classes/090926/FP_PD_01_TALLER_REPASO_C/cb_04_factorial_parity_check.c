/**
 * @file cb_04_factorial_parity_check.c
 * @brief Basic exercise to calculate factorial and determine number parity in C.
 * @author Johan Leal
 * @date 2026-09-13
 */

#include <stdio.h>
#include <stdbool.h>

bool parity (int number){
    if (number % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int factorial (int number){
    int factorial = 1;
    for (int i = number; i > 1; i--){
        factorial *= i;
    }
    return factorial;
}

int main (){
    int number = 5, value_factorial = factorial(number);

    if (parity(value_factorial)){
        printf("The factorial of %d is %d, and it is even\n", number, value_factorial);
    }else{
        printf("The factorial of %d is %d, and it is odd\n", number, value_factorial);
    }
    return 0;
}