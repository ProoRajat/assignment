# assignment

## Introduction
This is a college C language assignment which uses custom functions and header files

## File Structure

The project contains five files:
1. mylib.h – Contains function declarations for Objective 1.
2. mylib.c – Contains function definitions for Objective 1.
3. arraylib.h – Contains function declarations for Objective 2.
4. arraylib.c – Contains function definitions for Objective 2.
5. main.c – Includes both mylib.h and arraylib.h as header files and uses functions from both libraries.

## How to compile and run

- **Compiling:** Open terminal in the same directiory and run the following command

```bash
gcc main.c mylib.c arraylib.c -o prog
```

- **Running:** then type the following commmand.
```bash
.\prog
```

## Program Flow

- The program will first prompt the user to select an objective to test (Objective 1 or Objective 2).
- Based on the selection, it will display a menu of functions available under that objective.
- The user can then choose and execute the desired function.
