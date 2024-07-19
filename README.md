# Push_swap Project

The Push_swap project is an algorithmic project at 42 Network that involves sorting stacks of integers using a set of predefined operations with the goal of minimizing the number of operations performed.

## Table of Contents

- [Project Overview](#project-overview)
- [Project Structure](#project-structure)
- [Usage](#usage)
- [Algorithm Strategy](#algorithm-strategy)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goal of the project is to create two programs:

1. **push_swap**: A program that takes a list of integers as arguments, sorts them using two stacks and a set of predefined operations, and outputs a sequence of operations that sorts the integers in ascending order.
   
2. **checker**: A program that checks whether the sequence of operations provided by `push_swap` sorts the integers correctly.

The operations allowed are:
- **sa**: swap the first two elements of stack A
- **sb**: swap the first two elements of stack B
- **ss**: sa and sb at the same time
- **pa**: push the first element of stack A to stack B
- **pb**: push the first element of stack B to stack A
- **ra**: rotate stack A (move all elements up by one, the first element becomes the last)
- **rb**: rotate stack B
- **rr**: ra and rb at the same time
- **rra**: reverse rotate stack A (move all elements down by one, the last element becomes the first)
- **rrb**: reverse rotate stack B
- **rrr**: rra and rrb at the same time

## Project Structure

The project consists of the following files:

1. **push_swap.c**: Contains the main logic for the `push_swap` program.
2. **checker.c**: Contains the main logic for the `checker` program.
3. **libft**: A library of utility functions (similar to the `libft` project) that may be used in `push_swap` and `checker`.
4. **Makefile**: Defines compilation rules and dependencies for building the `push_swap` and `checker` executables.

## Usage

To compile the `push_swap` and `checker` programs, follow these steps:

1. **Clone the repository:**

    ```bash
    git clone https://github.com/ehoussa/42-Cursus---push_swap/
    cd 42-Cursus---push_swap
    ```

2. **Compile the programs:**

    ```bash
    make
    ```

    This will compile the `push_swap` and `checker` programs and create executable files called `push_swap` and `checker`.

3. **Run `push_swap` with a list of integers:**

    ```bash
    ./push_swap 3 2 1 5 4
    ```

    Replace `3 2 1 5 4` with your list of integers to be sorted.

4. **Run `checker` with operations provided by `push_swap`:**

    ```bash
    ./push_swap 3 2 1 5 4 | ./checker 3 2 1 5 4
    ```

    This will check if the operations output by `push_swap` correctly sort the integers.

## Algorithm Strategy

The `push_swap` program should implement an efficient sorting algorithm using the allowed operations to minimize the number of operations performed.

## Example

Assume you have a list of integers `3 2 1 5 4` that needs to be sorted. You would run:

```bash
./push_swap 3 2 1 5 4
