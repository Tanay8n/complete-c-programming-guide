#include <stdio.h>

int main(void) {
    int year;
    printf("Year: ");
    if (scanf("%d", &year) != 1 || year <= 0) {
        fputs("Enter a positive year.\n", stderr);
        return 1;
    }

    int leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    printf("%d is %sa leap year.\n", year, leap ? "" : "not ");
    return 0;
}
