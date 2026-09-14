/**
 * @file cb_05_prime_numbers.c
 * @brief Basic Exercise of Prime Numbers in C.
 * @author Johan Leal
 * @date 2026-09-07
 */

#include <stdio.h>

void prime_numbers(){
    printf("###Prime Numbers###\n");
    for (int i = 2; i <= 100; i++){
        int sum_divisions = 0;

        if ( i % 2 == 0 && i != 2){
            continue;
        }

        for(int j = 1; j <= i; j++){
            if (sum_divisions > 2){
                break;
            }
            if (i % j == 0){
                sum_divisions += 1;
            }
        }

        if (sum_divisions == 2){
            printf("%d\n",i);
        }
    }
}

int main (){
    prime_numbers();
    return 0;
}