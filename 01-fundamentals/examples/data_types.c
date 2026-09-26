#include <stdio.h>

int main(void) {
    int year = 2026;
    double pi = 3.141592653589793;
    char grade = 'A';

    printf("year  : %d (int uses %zu bytes)\n", year, sizeof year);
    printf("pi    : %.6f (double uses %zu bytes)\n", pi, sizeof pi);
    printf("grade : %c (char uses %zu byte)\n", grade, sizeof grade);
    return 0;
}
