/**
 * @file cb_03_ternary_min_max.c
 * @brief Basic exercise using the ternary operator to compare greater and lesser values in C.
 * @author Johan Leal
 * @date 2026-09-13
 */

#include <stdio.h>

void ternary_min_max (int number_a, int number_b, int number_c){
    int min = number_a;
    int max = number_a;

    min = number_a <= number_b && number_a <= number_c ? number_a : number_b <= number_a && number_b <= number_c ? number_b : number_c;
    max = number_a >= number_b && number_a >= number_c ? number_a : number_b >= number_a && number_b >= number_c ? number_b : number_c;
    
    printf("Min = %d, Max = %d\n", min, max);
}

int main (){
    ternary_min_max(2, 1, 3);
    return 0;
}
