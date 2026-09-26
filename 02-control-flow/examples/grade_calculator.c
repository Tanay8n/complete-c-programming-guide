#include <stdio.h>

int main(void) {
    double score;
    printf("Score (0-100): ");
    if (scanf("%lf", &score) != 1 || score < 0.0 || score > 100.0) {
        fputs("Score must be between 0 and 100.\n", stderr);
        return 1;
    }

    if (score >= 90.0) puts("Grade: A");
    else if (score >= 80.0) puts("Grade: B");
    else if (score >= 70.0) puts("Grade: C");
    else if (score >= 60.0) puts("Grade: D");
    else puts("Grade: F");
    return 0;
}
