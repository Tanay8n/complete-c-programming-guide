#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

static int append(struct Node **head, int value) {
    struct Node *node = malloc(sizeof *node);
    if (node == NULL) return 0;
    node->value = value;
    node->next = NULL;
    if (*head == NULL) *head = node;
    else {
        struct Node *tail = *head;
        while (tail->next != NULL) tail = tail->next;
        tail->next = node;
    }
    return 1;
}

static void destroy(struct Node *head) {
    while (head != NULL) {
        struct Node *next = head->next;
        free(head);
        head = next;
    }
}

int main(void) {
    struct Node *head = NULL;
    for (int value = 1; value <= 5; ++value) {
        if (!append(&head, value * value)) {
            destroy(head);
            fputs("Allocation failed.\n", stderr);
            return 1;
        }
    }
    for (const struct Node *node = head; node != NULL; node = node->next) {
        printf("%d%s", node->value, node->next == NULL ? "\n" : " -> ");
    }
    destroy(head);
    return 0;
}
