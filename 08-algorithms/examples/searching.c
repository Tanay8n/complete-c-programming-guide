#include <stdio.h>

static int linear_search(const int values[], size_t length, int target) {
    for (size_t i = 0; i < length; ++i) if (values[i] == target) return (int) i;
    return -1;
}

static int binary_search(const int values[], size_t length, int target) {
    size_t low = 0, high = length;
    while (low < high) {
        size_t middle = low + (high - low) / 2;
        if (values[middle] == target) return (int) middle;
        if (values[middle] < target) low = middle + 1;
        else high = middle;
    }
    return -1;
}

int main(void) {
    const int values[] = {3, 8, 14, 21, 35, 42};
    const size_t length = sizeof values / sizeof values[0];
    int target;
    printf("Target: ");
    if (scanf("%d", &target) != 1) return 1;
    printf("linear index = %d\n", linear_search(values, length, target));
    printf("binary index = %d\n", binary_search(values, length, target));
    return 0;
}
