#include <stdio.h>
#include <string.h>

int main(void) {
    char text[101];
    printf("Word or phrase: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    text[strcspn(text, "\n")] = '\0';

    size_t left = 0, right = strlen(text);
    int palindrome = 1;
    if (right > 0) --right;
    while (left < right) {
        if (text[left] != text[right]) {
            palindrome = 0;
            break;
        }
        ++left;
        --right;
    }
    puts(palindrome ? "Palindrome" : "Not a palindrome");
    return 0;
}
