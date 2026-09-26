#include <stdio.h>

static int is_prime(int number) {
    if (number < 2) return 0;
    for (int divisor = 2; divisor <= number / divisor; ++divisor) {
        if (number % divisor == 0) return 0;
    }
    return 1;
}

int main(void) {
    int limit;
    printf("Print primes up to: ");
    if (scanf("%d", &limit) != 1 || limit < 2) {
        fputs("Enter an integer of at least 2.\n", stderr);
        return 1;
    }

    for (int number = 2; number <= limit; ++number) {
        if (is_prime(number)) printf("%d ", number);
    }
    putchar('\n');
    return 0;
}
