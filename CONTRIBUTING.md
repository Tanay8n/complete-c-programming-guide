# Contributing

Thank you for helping improve the guide.

## Good contributions

- Correct explanations or code that compiles with C11.
- Small examples that teach one idea clearly.
- New lab questions with an input/output description and edge cases.
- Typo fixes, accessibility improvements, and clearer diagrams.

## Before opening a pull request

1. Compile changed programs with \`-std=c11 -Wall -Wextra -pedantic\`.
2. Check boundary cases (empty input, zero, negative values, and maximum sizes).
3. Keep examples portable; avoid compiler-specific extensions.
4. Update the relevant README when adding a file.
5. Explain what a beginner should learn from the change.

Please do not commit generated binaries or personal IDE files. See \`.gitignore\` for the expected exclusions.
