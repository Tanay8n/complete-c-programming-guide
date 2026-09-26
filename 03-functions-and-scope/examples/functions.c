#include <stdio.h>

static int maximum(const int values[], size_t length) {
    int result = values[0];
    for (size_t index = 1; index < length; ++index) {
        if (values[index] > result) result = values[index];
    }
    return result;
}

static double average(const int values[], size_t length) {
    int total = 0;
    for (size_t index = 0; index < length; ++index) total += values[index];
    return (double) total / (double) length;
}

int main(void) {
    const int marks[] = {78, 91, 84, 67, 88};
    const size_t count = sizeof marks / sizeof marks[0];
    printf("Average: %.2f\nMaximum: %d\n", average(marks, count), maximum(marks, count));
    return 0;
}
