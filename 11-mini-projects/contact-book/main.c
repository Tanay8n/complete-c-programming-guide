#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact { char name[64]; char phone[32]; };

static int add_contact(struct Contact **contacts, size_t *count, size_t *capacity) {
    if (*count == *capacity) {
        size_t next_capacity = *capacity == 0 ? 4 : *capacity * 2;
        struct Contact *resized = realloc(*contacts, next_capacity * sizeof **contacts);
        if (resized == NULL) return 0;
        *contacts = resized;
        *capacity = next_capacity;
    }
    struct Contact *contact = &(*contacts)[*count];
    printf("Name: ");
    if (scanf(" %63[^\n]", contact->name) != 1) return 0;
    printf("Phone: ");
    if (scanf(" %31s", contact->phone) != 1) return 0;
    ++*count;
    return 1;
}

static void save_contacts(const struct Contact contacts[], size_t count) {
    FILE *file = fopen("contacts.tsv", "w");
    if (file == NULL) { perror("contacts.tsv"); return; }
    for (size_t i = 0; i < count; ++i) fprintf(file, "%s\t%s\n", contacts[i].name, contacts[i].phone);
    fclose(file);
}

int main(void) {
    struct Contact *contacts = NULL;
    size_t count = 0, capacity = 0;
    int choice;
    do {
        puts("\n1 Add  2 List  3 Search  0 Save and exit");
        printf("Choice: ");
        if (scanf("%d", &choice) != 1) break;
        if (choice == 1) {
            if (!add_contact(&contacts, &count, &capacity)) fputs("Could not add contact.\n", stderr);
        } else if (choice == 2) {
            for (size_t i = 0; i < count; ++i) printf("%zu. %s — %s\n", i + 1, contacts[i].name, contacts[i].phone);
        } else if (choice == 3) {
            char query[64];
            printf("Name contains: ");
            if (scanf(" %63[^\n]", query) == 1) {
                for (size_t i = 0; i < count; ++i) {
                    if (strstr(contacts[i].name, query) != NULL) printf("%s — %s\n", contacts[i].name, contacts[i].phone);
                }
            }
        }
    } while (choice != 0);
    save_contacts(contacts, count);
    free(contacts);
    return 0;
}
