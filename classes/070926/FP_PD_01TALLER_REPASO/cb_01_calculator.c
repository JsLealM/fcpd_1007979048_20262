/**
 * @file cb_01_calculator.c
 * @brief Basic Exercise of calculator in C.
 * @author Johan Leal
 * @date 2026-07-09
 */

#include <stdio.h>

void calculator(int number_a, int number_b, char str_operator){
    switch (str_operator){
        case '+' :
            printf("%d + %d = %d\n", number_a, number_b, (number_a + number_b));
            break;
        case '-' :
            printf("%d - %d = %d\n", number_a, number_b, (number_a - number_b));
            break;
        case '*' :
            printf("%d * %d = %d\n", number_a, number_b, (number_a * number_b));
            break;
        case '/' :
            if (number_b == 0){
                printf("Math Error\n");
                break;
            }
            printf("%d / %d = %.2f\n", number_a, number_b,  ((float)number_a / number_b));
            break;
        default:
            printf("Invalid Operator...\n");
            break;
    }
}

int main(){
    int number_a, number_b;
    char str_operator;

    printf("Enter the first number: ");
    scanf("%d", &number_a);
    printf("Enter the second number: ");
    scanf("%d", &number_b);
    printf("Enter the operator(+,-,*,/): ");
    scanf(" %c", &str_operator);

    calculator(number_a, number_b, str_operator);

    return 0;
}