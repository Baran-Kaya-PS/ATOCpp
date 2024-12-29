# ATOCpp: Learning C++ with "A Tour of C++"

Welcome to ATOCpp, my journey to mastering C++ guided by the book *A Tour of C++* by Bjarne Stroustrup. This repository serves as both a learning log and a practical implementation of concepts from the book, featuring structured examples, exercises, and tests.

---

## Contents Covered
The project follows the book's chapters and sections, focusing on key aspects of the C++ language. Below is an outline of the topics explored:

### 1. The Basics
- Introduction to C++
- Writing basic programs
- Functions and their organization
- Types, variables, and arithmetic
- Scope, lifetime, and constants
- Pointers, arrays, and references
- Writing and running tests
- Mapping C++ to hardware

### 2. User-Defined Types
- Structures, classes, and enumerations
- Unions and their applications
- Best practices for designing types

### 3. Modularity
- Separate compilation and namespaces
- Efficient argument passing and return values

### 4. Error Handling
- Exception handling
- Maintaining program invariants
- Alternatives to exceptions
- Using assertions effectively

### 5. Advanced Classes
- Designing concrete and abstract types
- Virtual functions and class hierarchies

### 6. Essential Operations
- Copying and moving
- Resource management
- Overloading operators
- User-defined literals

### 7. Templates
- Parameterized types and operations
- Advanced template mechanisms

### 8. Generic Programming
- Concepts and variadic templates

### 9-18. Standard Library and Advanced Topics
- Containers, algorithms, ranges
- Strings and regular expressions
- Input/Output and file systems
- Numerics and concurrency
- Utilities, pointers, and more

---

## Project Structure
This repository is organized to mirror the book's structure:

```
ATOCpp/
├── src/                # Source files organized by chapters
│   ├── chapter1/
│   ├── chapter2/
│   └── ...
├── tests/              # Unit tests for exercises and concepts
│   ├── chapter1_tests/
│   ├── chapter2_tests/
│   └── ...
├── third_party/        # External libraries (e.g., Google Test)
├── CMakeLists.txt      # Build configuration
└── README.md           # Project overview
```

---

## Setup and Usage

### Prerequisites
- A C++ compiler (supporting C++20 or later)
- [CMake](https://cmake.org/) for build configuration
- [Google Test](https://github.com/google/googletest) for unit testing

### Build Instructions
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/ATOCpp.git
   cd ATOCpp
   ```
2. Configure the build:
   ```bash
   cmake -S . -B build
   ```
3. Compile the project:
   ```bash
   cmake --build build
   ```
4. Run the tests:
   ```bash
   ./build/tests
   ```

---

## Key Highlights
- Modular Design: Code is organized into reusable modules with separate compilation.
- Unit Testing: Comprehensive tests using Google Test to validate understanding and ensure correctness.
- Hands-On Examples: Practical implementations of concepts from each chapter.

---

## Why This Project?
This repository is a hands-on exploration of C++'s core features and best practices. It helps me:
- Solidify concepts by writing and testing real-world code.
- Build a strong foundation for modern C++ programming.
- Share my learning journey.

