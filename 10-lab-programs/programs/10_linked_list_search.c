#include <stdio.h>
#include <stdlib.h>

struct Node { int value; struct Node *next; };

int main(void) {
    int count, target;
    if (scanf("%d", &count) != 1 || count < 0 || count > 1000) return 1;
    struct Node *head = NULL, **tail = &head;
    for (int i = 0; i < count; ++i) {
        struct Node *node = malloc(sizeof *node);
        if (node == NULL || scanf("%d", &node->value) != 1) return 1;
        node->next = NULL;
        *tail = node;
        tail = &node->next;
    }
    if (scanf("%d", &target) != 1) return 1;
    int index = 0, found = -1;
    for (struct Node *node = head; node != NULL; node = node->next, ++index) {
        if (node->value == target) { found = index; break; }
    }
    printf("%d\n", found);
    while (head != NULL) {
        struct Node *next = head->next;
        free(head);
        head = next;
    }
    return 0;
}
