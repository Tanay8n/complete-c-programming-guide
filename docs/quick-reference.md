# C Quick Reference

## Program shape

\`\`\`c
#include <stdio.h>

int main(void) {
    puts("Hello, C");
    return 0;
}
\`\`\`

## Common types and format specifiers

| Type | \`printf\` | \`scanf\` |
| --- | --- | --- |
| \`int\` | \`%d\` | \`"%d"\` |
| \`long\` | \`%ld\` | \`"%ld"\` |
| \`double\` | \`%f\` | \`"%lf"\` |
| \`char\` | \`%c\` | \`" %c"\` (leading space skips whitespace) |
| C string | \`%s\` | \`%99s\` for a 100-byte buffer |

## Complexity reminders

- Array indexing: **O(1)**
- Linear search: **O(n)**
- Binary search on sorted data: **O(log n)**
- Selection sort: **O(n²)**
- Traversing a linked list: **O(n)**

## Safety checklist

- Check the return value of \`scanf\`/\`fgets\`.
- Keep one extra byte for the string terminator \`\\0\`.
- Never dereference a null or uninitialised pointer.
- Match every successful \`malloc\`/\`calloc\` with \`free\`.
- Keep array indexes in the range \`0\` through \`length - 1\`.
