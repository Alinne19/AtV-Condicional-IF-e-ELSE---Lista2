#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    printf("Digite a temperatura atual em Celsius:\n");
    scanf("%f", &celsius);

    if (celsius < 20) {
        
        fahrenheit = (celsius * 9/5) + 32;
        printf("O valor em Fahrenheit é %.1f\n", fahrenheit);
    } else {
        
        kelvin = celsius + 273.15;
        printf("O valor em Kelvin é %.1f\n", kelvin);
    }

    return 0;
}