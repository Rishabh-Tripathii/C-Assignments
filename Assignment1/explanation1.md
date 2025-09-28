# Assignment 1 — Print name without using semicolon

## Problem
Write a C program to print your name without using the semicolon (;) character anywhere.

## Approach / Idea
- We can use a control statement (if, while, etc.) whose syntax doesn't require a trailing semicolon for the expression.
- Put the printf() call inside the condition expression. The function executes and prints as part of evaluating the condition.

## Code
See [code1.c](./code1.c)

## Explanation
- printf("Your Name\n") prints the name and returns the number of characters printed (>0) .
- The if condition evaluates that return value. Because it's non-zero, the if's body runs (here the body is empty).
- No statement in the program uses a semicolon.

