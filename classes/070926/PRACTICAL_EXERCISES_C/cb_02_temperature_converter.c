/**
 * @file cb_02_temperature_converter.c
 * @brief Basic Exercise of Temperature Converter in C.
 * @author Johan Leal
 * @date 2026-09-07
 */

#include <stdio.h>

float fahrenheit (float celsius){
    return (celsius * ((float)9/5)) + 32;
}

int main (){
    float temperature_celsius;

    printf("Enter the temperature(Celsius): ");
    scanf("%f", &temperature_celsius);
    printf("Temperature in Fahrenheit: %.2f °F\n", fahrenheit(temperature_celsius));

    return 0;
}
