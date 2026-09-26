# Contributing

Thank you for helping improve the guide.

## Good contributions

- Correct explanations or code that compiles with C11.
- Small examples that teach one idea clearly.
- New lab questions with an input/output description and edge cases.
- Typo fixes, accessibility improvements, and clearer diagrams.

## Recommended lesson documentation template

When adding or expanding a module lesson/README, prefer this section order:

1. **Learning objectives**
2. **Prerequisites**
3. **Examples**
4. **Expected output**
5. **Common mistakes**
6. **Exercises**
7. **Challenge exercises**

You do not need to rewrite existing content that already teaches clearly; apply this template to new or updated lessons.

## Before opening a pull request

1. Compile changed programs with `-std=c11 -Wall -Wextra -pedantic`.
2. Check boundary cases (empty input, zero, negative values, and maximum sizes).
3. Keep examples portable; avoid compiler-specific extensions.
4. Update the relevant README when adding a file.
5. Explain what a beginner should learn from the change.

Please do not commit generated binaries or personal IDE files. See `.gitignore` for the expected exclusions.
