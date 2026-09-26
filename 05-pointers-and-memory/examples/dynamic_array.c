#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned int count;
    printf("Number of values: ");
    if (scanf("%u", &count) != 1 || count == 0 || count > 1000000) {
        fputs("Count must be between 1 and 1,000,000.\n", stderr);
        return 1;
    }

    int *values = malloc((size_t) count * sizeof *values);
    if (values == NULL) {
        fputs("Allocation failed.\n", stderr);
        return 1;
    }
    for (size_t i = 0; i < count; ++i) values[i] = (int) (i + 1);

    long long total = 0;
    for (size_t i = 0; i < count; ++i) total += values[i];
    printf("First=%d Last=%d Sum=%lld\n", values[0], values[count - 1], total);
    free(values);
    return 0;
}
