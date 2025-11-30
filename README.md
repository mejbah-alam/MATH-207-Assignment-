# MATH-207-Assignment-

##A beginner-friendly repository containing basic matrix operations implemented in modern C++

##This repository contains simple, well-commented C++ programs for common matrix operations. It is perfect for students learning linear algebra, data structures, or anyone who wants clean reference implementations.


#Task 1A - Transpose.cpp             Transpose of a matrix using same matrix (in-place style)
A simple C++ program that takes a matrix as input from the user and computes its **transpose**.

The transpose of a matrix is obtained by swapping its rows with columns.  
If A is an `m × n` matrix, its transpose B will be an `n × m` matrix where:  
`B[i][j] = A[j][i]`

## Features
- Dynamic matrix size input (m × n)
- User-friendly input prompts
- Computes and displays the transpose of the given matrix
- Clean output with proper formatting

## Example
Enter Rows Number of Matrix: 3
Enter Column Number of Matrix: 2

Enter Elements of Matrix A:
A[0][0]: 1
A[0][1]: 2
A[1][0]: 3
A[1][1]: 4
A[2][0]: 5
A[2][1]: 6

Transpose Matrix of A is B.
B: 	
	1 3 5 
	2 4 6 





#Task 1B - Transpose.cpp             Transpose of a matrix using a separate result matrix
A lightweight and efficient C++ program that computes the **transpose of a square matrix in-place** (without using extra space).

Perfect for learning matrix operations and understanding how to transpose a matrix by swapping elements along the main diagonal.

## Key Features
- Works only for **square matrices** (`n × n`)
- **In-place transposition** – No extra matrix required
- Time Complexity: `O(n²)`
- Space Complexity: `O(1)` (excluding input)
- Clean input/output with indexed prompts

## How It Works
The program swaps elements across the main diagonal:
- For every element below the diagonal (`row > col`), it swaps `A[row][col]` with `A[col][row]`
- Elements on and above the diagonal are either unchanged or already correctly placed

## Example
Enter Size of Square Matrix: 3

Enter Elements of Matrix A:
A[0][0]: 1
A[0][1]: 2
A[0][2]: 3
A[1][0]: 4
A[1][1]: 5
A[1][2]: 6
A[2][0]: 7
A[2][1]: 8
A[2][2]: 9

Transpose Matrix of A is B.
B: 
	1 4 7 
	2 5 8 
	3 6 9 





#Task 2  - CheckSymmetric.cpp        Check if a square matrix is symmetric (A = Aᵀ)
A simple and efficient C++ program that checks whether a given square matrix is **symmetric**.

A matrix is symmetric if it is equal to its transpose  
i.e., `A[i][j] == A[j][i]` for all `i` and `j`.

This program smartly checks only the lower triangular part (`row > col`) to avoid redundant comparisons.

## Features
- Works for any size square matrix (`n × n`)
- Optimized check: Only compares elements below the main diagonal
- Clear input prompts with indices
- Clean output: "Symmetric" or "Not Symmetric"

## Example 1: Symmetric Matrix
Enter Size of Square Matrix: 3

Enter Elements of Matrix A:
A[0][0]: 1    A[0][1]: 2    A[0][2]: 3
A[1][0]: 2    A[1][1]: 4    A[1][2]: 5
A[2][0]: 3    A[2][1]: 5    A[2][2]: 6

The Matrix is Symmetric





#Task 3  - CheckSkewSymmetric.cpp    Check if a square matrix is skew-symmetric (A = -Aᵀ)
A simple and efficient C++ program to check whether a given square matrix is **Skew-Symmetric** (also called anti-symmetric).

### Definition
A matrix **A** is skew-symmetric if:  Aᵀ = -A
That means:
- All diagonal elements must be **0**
- For every element, `A[i][j] == -A[j][i]`

## Features
- Works for any `n × n` square matrix
- Checks both conditions:
  - Diagonal elements = 0
  - Lower triangle = negative of upper triangle
- Optimized loop: only checks `row >= col`
- Clear and user-friendly input/output

## Example 1: Skew-Symmetric
Enter Size of Square Matrix: 3

Enter Elements of Matrix A:
A[0][0]: 0    A[0][1]: 5    A[0][2]: -8
A[1][0]: -5   A[1][1]: 0    A[1][2]: 9
A[2][0]: 8    A[2][1]: -9   A[2][2]: 0

The Matrix is Skew-Symmetric





#Task 4  - AdditionSubtraction.cpp   Matrix addition and subtraction
A clean and educational C++ program that performs **addition** and **subtraction** of two matrices of the **same size**.

Perfect for students learning basic matrix operations!

## Features
- Takes dimensions of two matrices
- Checks if addition/subtraction is possible (same dimensions)
- User-friendly input with indexed prompts
- Computes and displays:
  - **Sum** of matrices
  - **Difference** of matrices (Matrix1 − Matrix2)
- Clear formatted output

## Example Run
Enter Rows Number for 1st Matrix: 2
Enter Columns Number for 1st Matrix: 3
Enter Rows Number for 2nd Matrix: 2
Enter Columns Number for 2nd Matrix: 3

Enter Elements for 1st Matrix: 
mat1[0][0]: 5
mat1[0][1]: 6
mat1[0][2]: 7
mat1[1][0]: 8
mat1[1][1]: 9
mat1[1][2]: 10

Enter Elements for 2nd Matrix: 
mat2[0][0]: 1
mat2[0][1]: 2
mat2[0][2]: 3
mat2[1][0]: 4
mat2[1][1]: 5
mat2[1][2]: 6

Addition of 1st & 2nd Matrix:
6 8 10 
12 14 16 

Subtraction of 1st & 2nd Matrix:
4 4 4 
4 4 4 





#Task 5  - Multiplication.cpp        Classic matrix multiplication
A clean, efficient, and educational C++ program that performs **matrix multiplication** of two compatible matrices.

Perfect for students, beginners, and anyone learning linear algebra through code!

## What It Does
- Takes two matrices A (m × n) and B (p × q)
- Checks if multiplication is possible: **n == p**
- Computes the product C = A × B → size (m × q)
- Displays the result in a neat format

## Features
- Clear compatibility check (`columns of A == rows of B`)
- User-friendly input with indexed prompts
- Classic triple-nested loop implementation
- Proper formatting of output matrix

## Example
Enter Rows Number for 1st Matrix: 2
Enter Columns Number for 1st Matrix: 3
Enter Rows Number for 2nd Matrix: 3
Enter Columns Number for 2nd Matrix: 2

Enter Elements for 1st Matrix: 
mat1[0][0]: 1   mat1[0][1][0]: 2   mat1[0][2]: 3
mat1[1][0]: 4   mat1[1][1]: 5   mat1[1][2]: 6

Enter Elements for 2nd Matrix: 
mat2[0][0]: 7   mat2[0][1]: 8
mat2[1][0]: 9   mat2[1][1]: 10
mat2[2][0]: 11  mat2[2][1]: 12

Multiplication of 1st & 2nd Matrix:
58 64 
139 154 
