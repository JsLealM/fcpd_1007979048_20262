/**
 * @file cb_05_switch_menu.c
 * @brief Basic Exercise of Switch Menu in C.
 * @author Johan Leal
 * @date 2026-09-07
 */


#include <stdio.h>

int menu (){
    int number_a, number_b, option;
    while(true){

        printf("### Menu ###\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Quit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        if (option >= 1 && option <= 4){
            printf("Enter the first number: ");
            scanf("%d", &number_a);
            printf("Enter the second number: ");
            scanf("%d", &number_b);
        }

        switch (option){
            case 1 :
                printf("%d + %d = %d\n", number_a, number_b, (number_a + number_b));
                break;
            case 2 :
                printf("%d - %d = %d\n", number_a, number_b, (number_a - number_b));
                break;
            case 3 :
                printf("%d * %d = %d\n", number_a, number_b, (number_a * number_b));
                break;
            case 4 :
                if (number_b == 0){
                    printf("Math Error\n");
                    break;
                }
                printf("%d / %d = %.2f\n", number_a, number_b,  ((float)number_a / number_b));
                break;
            case 5 :
                printf("Exiting the menu...\n");
                break;
            default:
                printf("Invalid Operator...\n");
                break;
        }
        if (option == 5){
            break;
        }
    }
}

int main (){
    menu();
    return 0;
}