
# Push_swap

Push_swap is a sorting algorithm implementation in C that aims to efficiently sort a stack of integers. The project focuses on rigor, the use of C, and understanding basic algorithms and their complexities.


# Push_Swap Rules and Instruction set
The program operates exclusively with two stacks: stack A and stack B. Initially, all numbers are placed in stack A, while stack B remains empty.

The permissible actions include:

* ```pa``` (push A): Take the first element at the top of B and put it at the top of A. Do nothing if B is empty.
* ```pb``` (push B): Take the first element at the top of A and put it at the top of B. Do nothing if A is empty.
* ```sa``` (swap A): Swap the first 2 elements at the top of stack A. Do nothing if there is only one or no elements.
* ```sb``` (swap B): Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no elements.
* ```ss```: ```sa``` and ```sb``` at the same time.
* ```ra``` (rotate A): Shift all elements of stack A up by 1. The first element becomes the last one.
* ```rb``` (rotate B): Shift all elements of stack B up by 1. The first element becomes the last one.
* ```rr```: ```ra``` and ```rb``` at the same time.
* ```rra``` (reverse rotate A): Shift all elements of stack A down by 1. The last element becomes the first one.
* ```rrb``` (reverse rotate B): Shift all elements of stack b down by 1. The last element becomes the first one.
* ```rrr``` : ```rra``` and ```rrb``` at the same time.

#### The program's grading is contingent on the efficiency of its sorting process.

* Sorting 3 values: Achieve the task in no more than 3 actions.
* Sorting 5 values: Complete the sorting with no more than 12 actions.
#### Sorting 100 values: Earn a rating from 1 to 5 points based on the number of actions:
* 5 points for fewer than 700 actions
* 4 points for fewer than 900 actions
* 3 points for fewer than 1100 actions
* 2 points for fewer than 1300 actions
* 1 point for fewer than 1500 actions
#### Sorting 500 values: Attain a rating from 1 to 5 points depending on the number of actions:
* 5 points for fewer than 5500 actions
* 4 points for fewer than 7000 actions
* 3 points for fewer than 8500 actions
* 2 points for fewer than 10000 actions
* 1 point for fewer than 11500 actions


# Algorithm Overview
In this project, the goal is to efficiently sort a stack (stack A) using a set of operations, and the algorithm employed here utilizes the concept of the "Longest Common Subsequence (LCS)." The process is designed to achieve a minimal number of instructions for sorting.

###  Key Steps:
* Initial Configuration:

stack A contains a random set of negative and/or positive numbers (unsorted).
stack B is initially empty.
* Algorithm Execution:
The algorithm identifies the Longest Common Subsequence (LCS) in stack A, which represents a sorted sequence of numbers.  
This LCS is then transferred to stack B, leaving stack A with the already sorted elements and stack B containing the remaining unsorted elements.

* Optimal Push to stack A:
During the process of pushing elements from stack B back to stack A, the algorithm carefully selects the minimum element within stack B that, when pushed to stack A, requires the fewest instructions to maintain the sorted order.  
This optimal selection and positioning process ensures that stack A remains sorted while elements are moved back from stack B.

# USAGE

# Compilation

To compile the project, use the following command:

``` bash 
    make
```

# Running the Program

To execute the program with a list of integers , run the following command:

``` bash 
    ./push_swap " 9034 4 0 6 -596597 "
```
