# DSA2025_VU_PRACTISE_SORTING-ALGORITHMS
 A collection of C++ implementations of various sorting algorithms, including Bubble Sort, Quick Sort, Merge Sort, and others, with detailed explanations .
Sorting Algorithms in C++
This repository contains C++ implementations of various sorting algorithms, each accompanied by explanations and performance analyses. The goal is to provide a comprehensive resource for understanding how different sorting techniques operate and their use cases.

Table of Contents
Introduction

Sorting Algorithms Implemented

1. Bubble Sort

2. Selection Sort

3. Insertion Sort

4. Merge Sort

5. Quick Sort

6. Heap Sort

7. Radix Sort

Performance Comparison

How to Run the Code

Contributing

License

Introduction
Sorting is a fundamental operation in computer science, essential for optimizing the efficiency of other algorithms (like search algorithms) and for data organization. This repository provides implementations of several well-known sorting algorithms in C++, highlighting their mechanisms and performance characteristics.

Sorting Algorithms Implemented
1. Bubble Sort
Description: Bubble Sort is a simple comparison-based algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

Performance:

Worst-case time complexity: O(n²)

Best-case time complexity: O(n) (when the list is already sorted)

Average-case time complexity: O(n²)

Space complexity: O(1) (in-place sorting)

Implementation: Link to Bubble Sort implementation

2. Selection Sort
Description: Selection Sort divides the list into a sorted and an unsorted region. It repeatedly selects the smallest (or largest) element from the unsorted region and moves it to the end of the sorted region.

Performance:

Worst-case time complexity: O(n²)

Best-case time complexity: O(n²)

Average-case time complexity: O(n²)

Space complexity: O(1) (in-place sorting)

Implementation: Link to Selection Sort implementation

3. Insertion Sort
Description: Insertion Sort builds the sorted list one element at a time by repeatedly taking the next element and inserting it into its correct position among the previously sorted elements.

Performance:

Worst-case time complexity: O(n²)

Best-case time complexity: O(n) (when the list is already sorted)

Average-case time complexity: O(n²)

Space complexity: O(1) (in-place sorting)

Implementation: Link to Insertion Sort implementation

4. Merge Sort
Description: Merge Sort is a divide-and-conquer algorithm that splits the list into halves, recursively sorts each half, and then merges the sorted halves back together.

Performance:

Worst-case time complexity: O(n log n)

Best-case time complexity: O(n log n)

Average-case time complexity: O(n log n)

Space complexity: O(n) (requires additional space for merging)

Implementation: Link to Merge Sort implementation

5. Quick Sort
Description: Quick Sort is a divide-and-conquer algorithm that selects a 'pivot' element and partitions the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.

Performance:

Worst-case time complexity: O(n²) (rare, depends on pivot selection)

Best-case time complexity: O(n log n)

Average-case time complexity: O(n log n)

Space complexity: O(log n) (due to recursive stack)

Implementation: Link to Quick Sort implementation

6. Heap Sort
Description: Heap Sort converts the list into a binary heap structure, then repeatedly extracts the maximum element from the heap and reconstructs the heap until the list is sorted.

Performance:

Worst-case time complexity: O(n log n)

Best-case time complexity: O(n log n)

Average-case time complexity: O(n log n)

Space complexity: O(1) (in-place sorting)

Implementation: Link to Heap Sort implementation

Contributing
Contributions are welcome! If you have improvements or additional sorting algorithms to add, please fork the repository and submit a pull request.

License
This project is licensed under the MIT License. See the LICENCE.
