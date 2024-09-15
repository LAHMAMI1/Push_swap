# Push_swap

## Overview
**Push_swap** is a sorting algorithm project where the goal is to sort data using two stacks and a limited set of operations. The challenge is to sort the stack with the fewest possible moves, applying sorting algorithms and optimizing performance. 

## Features
- Sorting using two stacks (`a` and `b`)
- Operations such as swapping, pushing, rotating, and reverse rotating elements between the stacks
- Error handling for invalid input
- Optimized for sorting up to 500 integers

## Installation
1. Clone the repository:
    ```bash
    git clone https://github.com/LAHMAMI1/Push_swap.git
    ```
2. Navigate to the project directory:
    ```bash
    cd Push_swap
    ```
3. Compile the program:
    ```bash
    make
    ```

## How to Use
Run the program with a list of integers:
```bash
./push_swap [integers...]
```

## Example
```bash
$> ./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
```

## Operations
- `sa` : Swap the first two elements of stack a
- `sb` : Swap the first two elements of stack b
- `ss` : Swap both stacks
- `pa` : Push top element from b to a
- `pb` : Push top element from a to b
- `ra` : Rotate all elements in a upwards
- `rb` : Rotate all elements in b upwards
- `rra` : Reverse rotate all elements in a
- `rrb` : Reverse rotate all elements in b
- `rrr` : Reverse rotate both stacks

## Error Handling
- The program will print Error\n if:
  - Any arguments aren't integers
  - There are duplicate numbers
  - Non-integer inputs or values out of the integer range

## Benchmark
- Sort 100 random numbers in fewer than 700 operations.
- Sort 500 random numbers in fewer than 5500 operations.

## Bonus Features
- A checker program to verify if the stack is correctly sorted.

# Explaining how the sort algorithm work:

## sort_2 Function

**Purpose:**  
Sorts a stack of 2 elements.

**Logic:**  
- If the stack has exactly 2 elements (`size_a == 2`), the `sa()` function swaps the top two elements to ensure they are in order.
- The function exits after performing the swap.

## sort_3 Function

**Purpose:**  
Sorts a stack of 3 elements.

**Logic:**  
1. Finds the index of the largest element (`max_i`).
2. If the largest element is at the top (index 0), it rotates the stack using `ra()`.
3. If the largest element is in the middle (index 1), it reverse rotates the stack with `rra()`.
4. After adjusting the largest element, it checks if the remaining two elements need swapping using `sa()`.

## sort_4e5 Function

**Purpose:**  
Sorts a stack of 4 or 5 elements.

**Logic:**  
1. Pushes the smallest elements to another stack `b` until 3 elements remain in stack `a`.
2. Sorts the remaining 3 elements using the `sort_3()` function.
3. Pushes the elements from stack `b` back to stack `a` using `pa()`.

## sort_big function:

**Purpose:**  
Handles sorting for larger stacks (6 or more elements).

**Logic:**  

### Create Sorted Array (sort_arr)
1. A new array `arr` is created and filled with the contents of the stack using `fill_arr()`.
2. `sort_arr()` is then called to sort this array using a simple bubble sort algorithm:
   - Iterates through each element, compares it with the next, and swaps elements if needed using `ft_swap()`.

### Determine Range
Sets a range value based on the size of the stack to help break the sorting process into manageable sections.
- For 6-15 elements, the range is set to 3.
- For 16-100 elements, the range is set to 20.
- For more than 100 elements, the range is set to 40.

### Sort the Stack (sort_ab)
Sorts the stack in chunks based on the sorted array.
1. `sort_ab()` sorts the stack by comparing elements in stack `a` with the sorted array `arr`.
   - If an element is smaller than or equal to the current range value in `arr`, it is pushed to stack `b` using `pb()`.
   - The stack is rotated (`rb()`) if it matches the range or moved forward (`ra()`) if it is greater than the current range.
2. Once stack `a` is empty, elements in stack `b` are moved back to stack `a` in descending order by finding the maximum and pushing it back using `pa()` and `max_to_top()`.

