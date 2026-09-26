#include <stdio.h>

int main(void) {
    int values[100];
    unsigned int count;
    if (scanf("%u", &count) != 1 || count > 100) return 1;
    for (size_t i = 0; i < count; ++i) if (scanf("%d", &values[i]) != 1) return 1;
    for (size_t i = 0; i < count; ++i) {
        size_t smallest = i;
        for (size_t j = i + 1; j < count; ++j) if (values[j] < values[smallest]) smallest = j;
        int temporary = values[i]; values[i] = values[smallest]; values[smallest] = temporary;
    }
    for (size_t i = 0; i < count; ++i) printf("%d%s", values[i], i + 1 == count ? "\n" : " ");
    return 0;
}
