#include <stdio.h>

static unsigned long long factorial(unsigned int n) {
    if (n <= 1U) return 1ULL;
    return (unsigned long long) n * factorial(n - 1U);
}

int main(void) {
    unsigned int n;
    printf("n (0-20): ");
    if (scanf("%u", &n) != 1 || n > 20U) {
        fputs("Enter an integer from 0 to 20.\n", stderr);
        return 1;
    }
    printf("%u! = %llu\n", n, factorial(n));
    return 0;
}
