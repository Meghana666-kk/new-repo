# Simple C Calculator Library Project

## Project Overview
A lightweight C project demonstrating library creation and linking with basic arithmetic operations.

## Project Structure
```
.
├── Makefile
├── src
│   └── main.c         # Main program entry point
└── thirdparty
    ├── add.c          # Addition function implementation
    └── sub.c          # Subtraction function implementation
```

## Build Requirements
- GCC compiler
- GNU Make

## Build Instructions
```bash
# Clean previous builds
make clean

# Build the project
make

# Run the executable
./main
```

## Functions
- `add(int a, int b)`: Performs addition
- `sub(int a, int b)`: Performs subtraction

## Compilation Details
- Creates shared library for addition
- Creates static library for subtraction
- Links both libraries to main executable


