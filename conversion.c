#include <stdlib.h>
#include <string.h>
#include <stdio.h>

float celcius(float fahrenheit) {
    return 5 * (fahrenheit - 32) / 9;
}

int main(void) {
    float c;
    printf("-----------------------");
    printf("\nFahrenheit  -  Celsius");
    printf("\n-----------------------");
    for (int i = 0; i <= 200; i = i + 20) {
        c = celcius(i);
        printf("\n%d - %.1f", i, c);
    }
    return EXIT_SUCCESS;
}

