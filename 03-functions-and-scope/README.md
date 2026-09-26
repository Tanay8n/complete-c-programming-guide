# 03 — Functions and Scope

Functions divide a problem into named, testable pieces. A prototype tells the compiler the function's interface before its first call.

## Examples

- \`examples/functions.c\` — reusable average and maximum functions
- \`examples/recursion_factorial.c\` — base case and recursive case

## Key ideas

- C passes ordinary arguments by value; use pointers when a function must change caller-owned data.
- A local variable exists only inside its block.
- Prefer small pure functions when a calculation has no side effects.
