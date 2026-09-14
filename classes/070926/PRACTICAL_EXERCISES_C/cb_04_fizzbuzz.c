/**
 * @file cb_04_fizzbuzz.c
 * @brief Basic Exercise of FizzBuzz in C.
 * @author Johan Leal
 * @date 2026-09-07
 */

#include <stdio.h>

void fizzbuzz (){
    for (int i = 1; i <= 100; i++){
        if ( i % 15 == 0){
            printf("%d : FizzBuzz\n", i);
            continue;
        }
        if ( i % 5 == 0){
            printf("%d : Buzz\n", i);
            continue;
        }
        if ( i % 3 == 0){
            printf("%d : Fizz\n", i);
            continue;
        }
    }
}

int main (){
    fizzbuzz();
    return 0;
}