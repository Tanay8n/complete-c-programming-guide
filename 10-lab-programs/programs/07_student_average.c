#include <stdio.h>

struct Student { char name[32]; double marks[5]; };

int main(void) {
    struct Student student;
    if (scanf("%31s", student.name) != 1) return 1;
    double total = 0.0;
    for (size_t i = 0; i < 5; ++i) {
        if (scanf("%lf", &student.marks[i]) != 1) return 1;
        total += student.marks[i];
    }
    printf("%s %.2f\n", student.name, total / 5.0);
    return 0;
}
