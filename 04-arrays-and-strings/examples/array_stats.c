#include <stdio.h>

int main(void) {
    int values[100];
    unsigned int count;
    printf("How many values (1-100): ");
    if (scanf("%u", &count) != 1 || count == 0 || count > 100) {
        fputs("Count must be from 1 to 100.\n", stderr);
        return 1;
    }

    for (size_t i = 0; i < count; ++i) {
        if (scanf("%d", &values[i]) != 1) {
            fputs("Invalid integer.\n", stderr);
            return 1;
        }
    }

    int minimum = values[0], maximum = values[0], total = 0;
    for (size_t i = 0; i < count; ++i) {
        if (values[i] < minimum) minimum = values[i];
        if (values[i] > maximum) maximum = values[i];
        total += values[i];
    }
    printf("min=%d max=%d mean=%.2f\n", minimum, maximum, (double) total / count);
    return 0;
}
