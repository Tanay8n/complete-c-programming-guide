# C Style Guide

This repository keeps examples beginner-friendly, portable, and C11-compatible.

## Compiler standard and warnings

- Use C11 (`-std=c11`).
- Keep warning checks enabled (`-Wall -Wextra -pedantic`).
- New examples should compile with the repository Makefile/script defaults.

## Portability and standard library use

- Prefer ISO C standard-library headers and APIs.
- Avoid compiler-specific extensions and non-portable behavior.
- Keep file paths and I/O examples portable between Linux/macOS and Windows.

## Naming conventions

- Use clear, descriptive `snake_case` names for variables and functions.
- Use `UPPER_CASE` for macros/constants when needed.
- Prefer short names only for small loop counters.

## Input validation and error checking

- Check return values of input/output and allocation functions (`scanf`, `fopen`, `malloc`, etc.).
- Handle invalid input with clear control flow and beginner-readable messages.
- Include boundary-case awareness in examples where relevant.

## Memory ownership and cleanup

- If memory is allocated dynamically, show where it is freed.
- Avoid leaks, double free, and use-after-free patterns.
- Keep ownership simple and explicit in educational examples.

## Example file structure

- Most examples should stay single-file with one `main` function.
- Keep each example focused on one main concept.
- If a multi-file example is added, explain file roles clearly in the module README.

## Documentation updates

- When adding a new source file, update the relevant module README.
- Include what the learner should understand from the example.
- Add or update expected output/exercise notes when useful.
