# Matrix Operations - C Language

A professional C-based program designed to perform fundamental matrix operations. Developed as part of the CodeAlpha Internship to demonstrate the use of 2D arrays, loops, and modular programming.

## Features
- **Matrix Addition:** Seamlessly add two matrices of the same dimensions.
- **Matrix Transpose:** Efficiently calculate the transpose of a given matrix.
- **Matrix Multiplication:** Perform standard matrix multiplication (A * B) with proper validation.
- **Dynamic User Interaction:** Menu-driven interface that allows users to select operations.

## Technical Analysis
* **Time Complexity:** * Addition/Transpose: $O(n^2)$ due to nested loops iterating through rows and columns.
    * Multiplication: $O(n^3)$ due to the three-nested-loop structure required for dot products.
* **Space Complexity:** $O(n^2)$ as we store the matrix data in 2D arrays.

## Logic Flow
1. **Input:** The program prompts the user to define matrix dimensions and elements.
2. **Validation:** The program checks if dimensions are compatible (especially for multiplication).
3. **Processing:** Modular functions handle the math, keeping the main() function clean and readable.
4. **Output:** Results are formatted and displayed clearly in the console.

## Built With
- C Programming Language
- GCC Compiler
- 2D Arrays & Modular Functions

## Author
Islam El-Manhrawy
