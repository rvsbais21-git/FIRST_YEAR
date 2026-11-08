# First Year — IIIT Bhopal

A chronological archive of programming coursework, lab exercises, and practice from the first year of the Computer Science and Engineering programme at IIIT Bhopal.

The repository is intentionally organised around **when the work was done**, not solely by programming language or subject. It documents the learning process as it unfolded.

## Repository structure

- `week1/`, `week2/`, `week3/`, etc. — exercises grouped by their original week
- `LAB_WORK/` — laboratory exercises and submissions
- `.vscode/` — editor and build-task configuration

Some weekly folders contain both C and C++ files. The original filenames and chronology are retained for continuity.

## Working with the programs

Compile one source file at a time; many exercises are standalone programs with their own `main()`.

For C:

```bash
gcc -std=c11 -Wall -Wextra -pedantic path/to/program.c -o program
./program
```

For C++:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic path/to/program.cpp -o program
./program
```

Some files may be incomplete, experimental, or tied to a particular lab task. Review an individual file before relying on it.

## Chronological record

The weekly folders are the primary record of progress. Keep future work in the week in which it belongs, and use the source file or a short accompanying note to identify its subject when needed.

## Repository hygiene

This repository currently includes some generated macOS build/debug artefacts alongside source files. They are being catalogued for a separate review. This documentation and ignore-rule update does **not** remove existing files or rewrite history.

---
Maintained by [Rajyavardhan Singh Bais](https://github.com/rvsbais21-git).
