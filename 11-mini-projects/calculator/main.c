#include <stdio.h>

static double calculate(char operation, double left, double right, int *ok) {
    *ok = 1;
    switch (operation) {
        case '+': return left + right;
        case '-': return left - right;
        case '*': return left * right;
        case '/':
            if (right == 0.0) { *ok = 0; return 0.0; }
            return left / right;
        default: *ok = 0; return 0.0;
    }
}

int main(void) {
    double left, right, result;
    char operation;
    printf("Expression (for example 12.5 * 4): ");
    if (scanf("%lf %c %lf", &left, &operation, &right) != 3) return 1;
    int ok;
    result = calculate(operation, left, right, &ok);
    if (!ok) { fputs("Invalid operation or division by zero.\n", stderr); return 1; }
    printf("%.2f\n", result);
    return 0;
}
