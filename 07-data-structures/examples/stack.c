#include <stdio.h>

#define CAPACITY 5

struct Stack {
    int items[CAPACITY];
    size_t size;
};

static int push(struct Stack *stack, int value) {
    if (stack->size == CAPACITY) return 0;
    stack->items[stack->size++] = value;
    return 1;
}

static int pop(struct Stack *stack, int *value) {
    if (stack->size == 0) return 0;
    *value = stack->items[--stack->size];
    return 1;
}

int main(void) {
    struct Stack stack = {{0}, 0};
    for (int value = 10; value <= 50; value += 10) push(&stack, value);
    int value;
    while (pop(&stack, &value)) printf("%d ", value);
    putchar('\n');
    return 0;
}
