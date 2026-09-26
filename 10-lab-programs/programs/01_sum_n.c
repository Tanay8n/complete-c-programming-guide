#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 1) return 1;
    long long sum = 0;
    for (int i = 1; i <= n; ++i) sum += i;
    printf("%lld\n", sum);
    return 0;
}
