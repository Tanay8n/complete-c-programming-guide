#include <stdio.h>

int main(void) {
    double celsius;

    printf("Temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        fputs("Please enter a number.\n", stderr);
        return 1;
    }

    printf("Fahrenheit: %.2f\n", celsius * 9.0 / 5.0 + 32.0);
    return 0;
}
