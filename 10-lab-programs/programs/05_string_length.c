#include <stdio.h>

int main(void) {
    char text[256];
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    size_t length = 0;
    while (text[length] != '\0' && text[length] != '\n') ++length;
    printf("%zu\n", length);
    return 0;
}
