# C++ Vector Erase During Iteration Bug

This repository demonstrates a common bug in C++ when erasing elements from a `std::vector` while iterating through it using an index-based loop. The bug arises because erasing an element shifts the indices of subsequent elements, causing potential skips or out-of-bounds access.

The `bug.cpp` file contains the buggy code.  The `bugSolution.cpp` file provides a corrected version that demonstrates how to safely erase elements from a vector during iteration.

## How to Reproduce

1. Clone this repository.
2. Compile `bug.cpp` (using a C++ compiler like g++).
3. Run the executable. You'll likely observe incorrect behavior.
4. Compile and run `bugSolution.cpp` to see the corrected implementation.

## Bug Explanation

The primary issue is using an index-based loop while modifying the vector's size.  After erasing an element, the indices of subsequent elements are shifted.  This can result in elements being skipped or accessing elements beyond the vector's bounds.

## Solution

The corrected code demonstrates the use of iterators and the `erase` method that takes an iterator as an argument. This method removes the element pointed to by the iterator and adjusts the iterators accordingly, avoiding indexing issues.