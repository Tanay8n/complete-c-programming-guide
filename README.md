# Complete C Programming Guide

An open, practical C language guide for first-year B.Tech students. It is arranged as a semester-friendly path: learn a concept, read a small example, practise it in the lab, and then revisit the exam notes.

## What is included

- **01 Fundamentals** — program structure, types, operators, input/output, and compilation
- **02 Control Flow** — decisions, loops, nested loops, and number problems
- **03 Functions and Scope** — prototypes, parameter passing, recursion, and scope
- **04 Arrays and Strings** — one-/two-dimensional arrays and safe string handling
- **05 Pointers and Memory** — addresses, pointer arithmetic, dynamic allocation, and ownership
- **06 Structures and Files** — user-defined types, records, and text-file I/O
- **07 Data Structures** — stacks and singly linked lists implemented from scratch
- **08 Algorithms** — searching, sorting, complexity, and correctness notes
- **09 Exam Preparation** — quick revision sheet, question bank, and model answers
- **10 Lab Programs** — a progressive set of common first-year practicals
- **11 Mini Projects** — a menu calculator and a file-backed contact book

## Suggested learning path

1. Read the module README and type each example yourself.
2. Compile with warnings enabled (\`-std=c11 -Wall -Wextra -pedantic\`).
3. Change an input, add a test case, and explain the output in your own words.
4. Complete the matching lab programs without looking at the solution first.
5. Use the exam-preparation notes only after you can solve the exercises.

## Quick start

### Linux/macOS (GCC or Clang)

\`\`\`bash
cd complete-c-programming-guide
make examples
./build/01-fundamentals/examples/hello_world
\`\`\`

### Windows (MinGW GCC)

Run the PowerShell helper from the repository root:

\`\`\`powershell
.\\scripts\\compile_all.ps1
.\\build\\01-fundamentals\\examples\\hello_world.exe
\`\`\`

To compile one file directly:

\`\`\`powershell
gcc -std=c11 -Wall -Wextra -pedantic 01-fundamentals/examples/hello_world.c -o hello_world.exe
\`\`\`

## Repository conventions

- Examples are intentionally small and each has its own \`main\` function.
- Input validation is shown where it matters; never use \`gets\`.
- Dynamic memory is paired with \`free\` in the same example.
- C source files use C11-compatible standard-library facilities only.
- Exercises and answers are kept separate so the repository can be used for self-study.

## License

Released under the MIT License. See [LICENSE](LICENSE).

## Contributing

Spotted an error or want to add a problem? Read [CONTRIBUTING.md](CONTRIBUTING.md).
