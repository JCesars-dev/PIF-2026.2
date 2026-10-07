#include <stdio.h>

int main() {

    int celsius;
    float fahrenheit, kelvin;

    printf("Celsius\tFahrenheit\tKelvin\n");

    for (celsius = 0; celsius <= 100; celsius += 5) {

        fahrenheit = (9.0 * celsius) / 5.0 + 32;
        kelvin = celsius + 273.15;

        printf("%7.2f\t%10.2f\t%7.2f\n",
               (float)celsius, fahrenheit, kelvin);
    }

    return 0;
}