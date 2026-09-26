#include <stdio.h>

struct Student {
    int roll_number;
    char name[32];
    double cgpa;
};

int main(void) {
    const struct Student students[] = {
        {101, "Asha", 8.4},
        {102, "Rahul", 9.1},
        {103, "Mina", 7.8}
    };
    const size_t count = sizeof students / sizeof students[0];
    puts("Roll  Name                         CGPA");
    puts("----------------------------------------");
    for (size_t i = 0; i < count; ++i) {
        printf("%-5d %-28s %.2f\n", students[i].roll_number, students[i].name, students[i].cgpa);
    }
    return 0;
}
