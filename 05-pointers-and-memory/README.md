# 05 — Pointers and Memory

A pointer stores an address. This module connects pass-by-value functions to caller-owned data and introduces dynamic storage.

## Examples

- \`examples/pointer_swap.c\` — swap values through addresses
- \`examples/dynamic_array.c\` — \`malloc\`, \`realloc\`, and \`free\`

## Rules to remember

- Initialise a pointer before dereferencing it.
- \`&value\` obtains an address; \`*pointer\` accesses the value at that address.
- After \`realloc\`, use the returned pointer only if it is non-null.
- Do not use memory after \`free\`.
