#include <stdio.h>

int main(void) {
    unsigned int count;
    if (scanf("%u", &count) != 1 || count > 93U) return 1;
    unsigned long long first = 0, second = 1;
    for (unsigned int i = 0; i < count; ++i) {
        printf("%llu%s", first, i + 1 == count ? "\n" : " ");
        unsigned long long next = first + second;
        first = second;
        second = next;
    }
    return 0;
}
