/**
 * @file cb_03_area_perimeter_rectangle.c
 * @brief Basic Exercise of Area and Perimeter of a Rectangle in C.
 * @author Johan Leal
 * @date 2026-09-07
 */

#include <stdio.h>

void area_perimeter_rectangle (float base, float height){
    float area, perimeter;

    area = base * height;
    perimeter = (2*base) + (2*height);

    printf("Area Rectangle: %.2f\n", area);
    printf("Perimeter Rectangle: %.2f\n", perimeter);
}

int main(){
    float base, height;

    printf("Enter the base of rectangle: ");
    scanf("%f", &base);
    printf("Enter the height of rectangle: ");
    scanf("%f", &height);

    area_perimeter_rectangle(base,height);
    return 0;
}