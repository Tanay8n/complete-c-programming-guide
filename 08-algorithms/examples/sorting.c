#include <stdio.h>

static void selection_sort(int values[], size_t length) {
    for (size_t position = 0; position < length; ++position) {
        size_t smallest = position;
        for (size_t candidate = position + 1; candidate < length; ++candidate) {
            if (values[candidate] < values[smallest]) smallest = candidate;
        }
        int temporary = values[position];
        values[position] = values[smallest];
        values[smallest] = temporary;
        /* Invariant: values[0..position] is sorted after each pass. */
    }
}

int main(void) {
    int values[] = {29, 10, 14, 37, 13};
    const size_t length = sizeof values / sizeof values[0];
    selection_sort(values, length);
    for (size_t i = 0; i < length; ++i) printf("%d%s", values[i], i + 1 == length ? "\n" : " ");
    return 0;
}
