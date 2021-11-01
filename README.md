# TimeComplexityFib

This is an exercise used for week 6 of Class Encore for CIS 212:

The goal was to write a program to print the nth Fibonacci number. The first solution does so recursively and has exponential time complexity. The second solution uses an array to store each value of F, thus, eliminating the need for repetitive calculations done in solution 1. This allows solution 2 to have O(n) complexity. The third solution solves the recurrence relation F(n) = F(n-1) + F(n-2), in order to achieve log(n) complexity (due to the power function having O(log(n)) complexity).

There is a C file that acts as a solution to the question posed to the group.

There is also a Jupyter notebook that compares the execution times using a visualization. The goal of this file is to further help students understand the importance of time complexity in writing good programs. 
