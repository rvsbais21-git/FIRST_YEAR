# First Year — IIIT Bhopal

A working archive of programming coursework, lab exercises, and practice completed during the first year of the Computer Science and Engineering programme at IIIT Bhopal.

The repository primarily contains C exercises, with some C++ files where relevant to the coursework or practice.

## Repository structure

- `week1/`, `week2/`, etc. — exercises grouped by the week in which they were written
- `LAB_WORK/` — laboratory submissions and related work
- `.vscode/` — local editor/build configuration

The existing folder and file names are retained for continuity with the original coursework.

## Compiling a program

Compile an individual source file rather than the entire repository. For C:

```bash
gcc -std=c11 -Wall -Wextra -pedantic path/to/program.c -o program
./program
```

For a C++ exercise:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic path/to/program.cpp -o program
./program
```

Some exercises may be incomplete, experimental, or specific to a lab task. Check the individual source file before relying on it.

## Repository hygiene

Generated executables, debug-symbol folders, and operating-system metadata are not source material. They are being identified for a separate, reviewed cleanup; this documentation update does not remove or modify any existing files.

## Purpose

This is a record of the learning process, not a polished library. The aim is to keep coursework organised, preserve progress, and make future revision easier.

---
Maintained by [Rajyavardhan Singh Bais](https://github.com/rvsbais21-git).
