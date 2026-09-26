# One-Page C Cheat Sheet

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

## Frequent mistakes

- Missing \`&\` in \`scanf("%d", &number)\`.
- Reading past an array's last element.
- Comparing strings with \`==\` instead of \`strcmp\`.
- Forgetting \`break\` in a \`switch\` when fall-through is not intended.
- Returning the address of a local variable.
