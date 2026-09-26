#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s source destination\n", argv[0]);
        return 1;
    }

    FILE *source = fopen(argv[1], "rb");
    if (source == NULL) {
        perror("source");
        return 1;
    }
    FILE *destination = fopen(argv[2], "wb");
    if (destination == NULL) {
        perror("destination");
        fclose(source);
        return 1;
    }

    unsigned char buffer[4096];
    size_t bytes;
    int status = 0;
    while ((bytes = fread(buffer, 1, sizeof buffer, source)) > 0) {
        if (fwrite(buffer, 1, bytes, destination) != bytes) {
            fputs("Write error.\n", stderr);
            status = 1;
            break;
        }
    }
    if (ferror(source)) {
        fputs("Read error.\n", stderr);
        status = 1;
    }
    if (fclose(source) != 0 || fclose(destination) != 0) status = 1;
    return status;
}
