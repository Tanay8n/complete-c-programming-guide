# Complete C Programming Guide

[![Compile C Programs](https://github.com/Tanay8n/complete-c-programming-guide/actions/workflows/compile.yml/badge.svg)](https://github.com/Tanay8n/complete-c-programming-guide/actions/workflows/compile.yml)

An open, practical C language guide for first-year B.Tech students. It is arranged as a semester-friendly path: learn a concept, read a small example, practise it in the lab, and then revisit the exam notes.

## Audience and prerequisites

This repository is for beginners who are learning C in their first semester/year.

Before starting, you should be comfortable with:
- Basic command-line usage
- Installing a C compiler (`gcc`, `clang`, or MSVC-compatible toolchain)
- Running programs from a terminal

## Navigation

- [Build and run](#build-and-run)
- [What is included](#what-is-included)
- [Module index](#module-index)
- [Suggested learning path](#suggested-learning-path)
- [Learning checklist](#learning-checklist)
- [Repository conventions](#repository-conventions)
- [License](#license)
- [Contributing](#contributing)

## Build and run

### Linux/macOS (Makefile)

```bash
make clean all
./build/01-fundamentals/examples/hello_world
```

### Windows (PowerShell)

```powershell
./scripts/compile_all.ps1
./build/01-fundamentals/examples/hello_world.exe
```

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

## Module index

1. [01 Fundamentals](01-fundamentals/README.md)
2. [02 Control Flow](02-control-flow/README.md)
3. [03 Functions and Scope](03-functions-and-scope/README.md)
4. [04 Arrays and Strings](04-arrays-and-strings/README.md)
5. [05 Pointers and Memory](05-pointers-and-memory/README.md)
6. [06 Structures and Files](06-structures-and-files/README.md)
7. [07 Data Structures](07-data-structures/README.md)
8. [08 Algorithms](08-algorithms/README.md)
9. [09 Exam Preparation](09-exam-preparation/README.md)
10. [10 Lab Programs](10-lab-programs/README.md)
11. [11 Mini Projects](11-mini-projects/README.md)

## Suggested learning path

1. Read the module README and type each example yourself.
2. Compile with warnings enabled (`-std=c11 -Wall -Wextra -pedantic`).
3. Change an input, add a test case, and explain the output in your own words.
4. Complete the matching lab programs without looking at the solution first.
5. Use the exam-preparation notes only after you can solve the exercises.

## Learning checklist

- [ ] Complete **01 Fundamentals**
- [ ] Complete **02 Control Flow**
- [ ] Complete **03 Functions and Scope**
- [ ] Complete **04 Arrays and Strings**
- [ ] Complete **05 Pointers and Memory**
- [ ] Complete **06 Structures and Files**
- [ ] Complete **07 Data Structures**
- [ ] Complete **08 Algorithms**
- [ ] Complete **09 Exam Preparation**
- [ ] Complete **10 Lab Programs**
- [ ] Complete **11 Mini Projects**

## Repository conventions

- Examples are intentionally small and each has its own `main` function.
- Input validation is shown where it matters; never use `gets`.
- Dynamic memory is paired with `free` in the same example.
- C source files use C11-compatible standard-library facilities only.
- Exercises and answers are kept separate so the repository can be used for self-study.

## License

Released under the MIT License. See [LICENSE](LICENSE).

## Contributing

Spotted an error or want to add a problem? Read [CONTRIBUTING.md](CONTRIBUTING.md).
