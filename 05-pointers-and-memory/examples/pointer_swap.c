#include <stdio.h>

static void swap(int *left, int *right) {
    int temporary = *left;
    *left = *right;
    *right = temporary;
}

int main(void) {
    int first = 12, second = 45;
    printf("Before: %d %d\n", first, second);
    swap(&first, &second);
    printf("After : %d %d\n", first, second);
    return 0;
}
