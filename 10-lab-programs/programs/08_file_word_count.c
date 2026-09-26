#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc != 2) return 1;
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) return 1;
    int character, in_word = 0;
    unsigned long words = 0;
    while ((character = fgetc(file)) != EOF) {
        if (isspace((unsigned char) character)) in_word = 0;
        else if (!in_word) { in_word = 1; ++words; }
    }
    fclose(file);
    printf("%lu\n", words);
    return 0;
}
