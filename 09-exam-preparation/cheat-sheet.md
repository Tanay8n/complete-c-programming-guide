# Complete C Cheat Sheet

## Program structure and types

```c
#include <stdio.h>

int main(void) {
	puts("Hello, C");
	return 0;
}
```

- Statements normally end with `;`; blocks use `{` and `}`. C is case-sensitive.
- Declare and initialise variables before using them. `const` prevents modification through that identifier.
- Common types: `char`, `int`, `long`, `float`, `double`, and `size_t`.
- Common format specifiers: `%c`, `%d`, `%ld`, `%f`, `%lf`, and `%zu`.
- Arithmetic: `+`, `-`, `*`, `/`, `%`; comparison: `==`, `!=`, `<`, `<=`, `>`, `>=`.
- Logic: `&&`, `||`, `!`; assignment: `=`, `+=`, `-=`, `*=`, `/=`, `++`, `--`.
- Integer division discards the fractional part: `5 / 2` is `2`.
- Cast when needed: `(double) total / count`. Never divide by zero.

## Input and output

```c
int number;
if (scanf("%d", &number) != 1) {
	puts("Invalid input");
}

char line[100];
if (fgets(line, sizeof line, stdin) != NULL) {
	/* line may include a trailing '\n' */
}
```

- `printf` formats output; `puts` prints a string and a newline.
- `scanf` needs an address for scalar variables: `&number`.
- A string array passed to `scanf("%99s", word)` does not need `&`.
- Prefer `fgets` for lines because it limits the number of characters read.
- Check input return values before using the result.

## Functions and scope

```c
int maximum(int first, int second);

int maximum(int first, int second) {
	return first > second ? first : second;
}
```

- A prototype declares a function before its first call.
- C passes ordinary arguments by value. Use a pointer to modify caller-owned data:

```c
void set_zero(int *value) {
	*value = 0;
}

set_zero(&number);
```

- `void` means no return value. Local variables exist only inside their block.
- Recursion needs a base case and a step toward that case.

## Control flow

\`\`\`c
if (condition) { ... } else { ... }
for (initialise; condition; update) { ... }
while (condition) { ... }
\`\`\`

## Arrays and pointers

For \`int values[5]\`, valid indexes are \`0\` through \`4\`. In an expression, \`values\` usually becomes a pointer to its first element. \`values[i]\` is equivalent to \`*(values + i)\`.

## Function passing

\`\`\`c
void set_zero(int *value) { *value = 0; }
\`\`\`

Call with \`set_zero(&number);\` because the function needs the address of the caller's variable.

## File modes

\`"r"\` read text, \`"w"\` replace/create text, \`"a"\` append text, \`"rb"\` and \`"wb"\` binary variants.

## Structures and enumerations

```c
struct Student {
	char name[50];
	int mark;
};

struct Student student = {"Ada", 95};
printf("%s: %d\n", student.name, student.mark);
```

- Use `.` with a structure value and `->` with a pointer to a structure.
- `typedef` can give a shorter type name; `enum` gives names to related integer constants.
- `sizeof` returns the size of a type or object, not the number of elements in a pointer.

## Dynamic memory

```c
int *numbers = malloc(count * sizeof *numbers);
if (numbers == NULL) {
	return 1;
}

int *resized = realloc(numbers, new_count * sizeof *numbers);
if (resized != NULL) {
	numbers = resized;
}

free(numbers);
numbers = NULL;
```

- Include `<stdlib.h>` for `malloc`, `calloc`, `realloc`, and `free`.
- Check allocation results before use and match every successful allocation with one `free`.
- Do not use memory after `free`.
- Use a temporary pointer for `realloc` so the original allocation is not lost on failure.

## Files

```c
FILE *file = fopen("data.txt", "r");
if (file == NULL) {
	return 1;
}

/* read or write */
fclose(file);
```

| Mode | Meaning |
| --- | --- |
| `"r"` | read an existing text file |
| `"w"` | create or replace a text file |
| `"a"` | append to or create a text file |
| `"rb"`, `"wb"` | read/write binary data |

- Check that `fopen` succeeds and close every successfully opened file.
- Check `fscanf`, `fgets`, `fread`, and `fwrite` when errors matter.
- Use `EOF` when reading character-by-character.

## Data structures

```c
struct Node {
	int value;
	struct Node *next;
};
```

- An array offers $O(1)$ indexed access; insertion in the middle is usually $O(n)$.
- A stack is last-in, first-out: `push`, `pop`, and `peek`.
- A queue is first-in, first-out: `enqueue` and `dequeue`.
- A singly linked list stores a value and a pointer to the next node.
- Traversing a linked list is $O(n)$; every heap node must eventually be freed.

## Searching and sorting

- **Linear search:** works on unsorted data and checks elements one by one; worst case $O(n)$.
- **Binary search:** requires sorted data, discards half the range each step, and is $O(\log n)$.
- Use `middle = left + (right - left) / 2` to avoid index overflow.
- **Selection sort:** repeatedly selects the smallest remaining item; its sorted prefix is the loop invariant and its worst case is $O(n^2)$.

## Complexity reminders

| Operation | Typical complexity |
| --- | --- |
| Array index | $O(1)$ |
| Linked-list traversal | $O(n)$ |
| Linear search | $O(n)$ |
| Binary search | $O(\log n)$ |
| Selection sort | $O(n^2)$ |
| Recursive factorial | $O(n)$ time, $O(n)$ stack space |

## Compilation and testing

```text
gcc -std=c11 -Wall -Wextra -pedantic program.c -o program
```

- Warnings reveal missing prototypes, wrong format strings, and unused values.
- Test zero, one, negative values, empty input, maximum sizes, and invalid input.
- In this repository, use `make examples` on Unix-like systems or `scripts/compile_all.ps1` on Windows.

## Frequent mistakes

- Missing \`&\` in \`scanf("%d", &number)\`.
- Reading past an array's last element.
- Comparing strings with \`==\` instead of \`strcmp\`.
- Forgetting \`break\` in a \`switch\` when fall-through is not intended.
- Returning the address of a local variable.
