# 08 — Algorithms

An algorithm is a precise procedure, not just code that happens to work on one input. Record its preconditions, invariant, and complexity.

## Examples

- \`examples/searching.c\` — linear and binary search
- \`examples/sorting.c\` — selection sort and an invariant comment

## Compare

| Algorithm | Requires sorted input? | Worst-case time |
| --- | --- | --- |
| Linear search | No | O(n) |
| Binary search | Yes | O(log n) |
| Selection sort | No | O(n²) |

Try instrumenting the examples to count comparisons.
