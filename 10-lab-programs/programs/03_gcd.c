#include <stdio.h>

static int absolute(int value) { return value < 0 ? -value : value; }

int main(void) {
    int a, b;
    if (scanf("%d%d", &a, &b) != 2) return 1;
    a = absolute(a);
    b = absolute(b);
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    printf("%d\n", a);
    return 0;
}
