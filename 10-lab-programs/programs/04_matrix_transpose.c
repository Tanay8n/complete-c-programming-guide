#include <stdio.h>

int main(void) {
    int rows, columns;
    if (scanf("%d%d", &rows, &columns) != 2 || rows < 1 || rows > 10 || columns < 1 || columns > 10) return 1;
    int matrix[10][10];
    for (int r = 0; r < rows; ++r) for (int c = 0; c < columns; ++c) if (scanf("%d", &matrix[r][c]) != 1) return 1;
    for (int c = 0; c < columns; ++c) {
        for (int r = 0; r < rows; ++r) printf("%d%s", matrix[r][c], r + 1 == rows ? "\n" : " ");
    }
    return 0;
}
