# Recursion in C++

## Aim
To study and implement the concept of Recursion in C++.

## Software
- Visual Studio Code (VS Code)

## Objectives
- Understand the concept of recursion and how it works in C++.
- Learn to identify **base case** and **recursive case** in problems.
- Implement recursive functions for mathematical and string-based problems.
- Compare recursion with iteration in terms of readability, performance, and memory usage.
- Explore real-world applications of recursion such as divide-and-conquer algorithms, tree traversals, and backtracking.

---

## Detailed Theory

### What is Recursion?
Recursion is a programming technique where a function calls itself directly or indirectly to solve a problem. It breaks down complex problems into smaller subproblems of the same type.

### Key Components
1. **Base Case**  
   - A condition that stops further recursive calls.  
   - Prevents infinite recursion and stack overflow.

2. **Recursive Case**  
   - The step where the function calls itself with a reduced problem size.  
   - Gradually approaches the base case.

### How It Works
- Each recursive call is pushed onto the call stack with its own set of arguments and local variables.
- When the base case is reached, the calls begin to return, and the stack starts unwinding.
- The final result is obtained after all calls complete.

### Types of Recursion
1. **Direct Recursion** – A function calls itself directly.  
2. **Indirect Recursion** – A function calls another function that in turn calls the first one.  
3. **Tail Recursion** – Recursive call is the last operation in the function.  
4. **Non-tail Recursion** – Extra operations are performed after the recursive call.

### Applications
- Mathematical problems (factorial, Fibonacci sequence, power functions).
- Searching and sorting algorithms (binary search, quicksort, mergesort).
- String operations (reversing, palindrome check).
- Traversing data structures (trees, graphs).
- Backtracking (N-Queens, Sudoku solver, pathfinding).

### Comparison with Iteration

| Aspect              | Recursion                            | Iteration                          |
|---------------------|--------------------------------------|-------------------------------------|
| Approach            | Function calls itself                | Uses loops (for, while, do-while)  |
| Memory Usage        | Higher (stack frames per call)       | Lower (uses loop variables)        |
| Code Length         | Shorter, elegant for complex logic   | Longer, sometimes harder to read   |
| Performance         | Slightly slower (function overhead)  | Usually faster                     |
| Suitability         | Divide-and-conquer, recursive data   | Repetitive tasks with fixed bounds |

---

## Conclusion
- Recursion is a **powerful and expressive tool** in C++ that simplifies solving problems with recursive structures.  
- It enhances **clarity and reduces code complexity**, especially in algorithms like tree traversals, graph search, and backtracking.  
- However, recursion must be used **carefully**, as it consumes stack memory and can lead to inefficiency or crashes if the base case is missing or unreachable.  
- In practice, recursion is best for problems where the recursive structure naturally matches the problem definition, while iteration is preferred for performance-sensitive and simple repetitive tasks.  
- A good programmer balances recursion and iteration depending on the requirements of the problem.  

---
