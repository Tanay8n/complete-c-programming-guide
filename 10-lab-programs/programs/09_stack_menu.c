#include <stdio.h>

#define CAPACITY 20
int main(void) {
    int stack[CAPACITY], size = 0, choice, value;
    do {
        printf("1 push  2 pop  3 display  0 exit\nChoice: ");
        if (scanf("%d", &choice) != 1) return 1;
        if (choice == 1) {
            if (size == CAPACITY || scanf("%d", &value) != 1) return 1;
            stack[size++] = value;
        } else if (choice == 2) {
            if (size == 0) puts("underflow"); else printf("%d\n", stack[--size]);
        } else if (choice == 3) {
            for (int i = size - 1; i >= 0; --i) printf("%d%s", stack[i], i == 0 ? "\n" : " ");
        }
    } while (choice != 0);
    return 0;
}
