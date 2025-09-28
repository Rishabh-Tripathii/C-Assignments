# Printing a hut using loop

## Problem 
Write a program in C to print the hut with trapezium roof two windows and a gate using loops 

## Approach

- I drew a hut with proper measurments on a graph paper .
- Then tried to write a code for each line step by step considering the measuremnts and condition for loop from the hut .

## Code
See [code3.c](./code3.c)

## Explanation 
- I have declared three integer variables: i, j, and k for loop counters.
- The main outer loop, for (i=0; i<=15; i++) runs from row 0 to 15 (total 16 rows).
- The first inner loop, for(j=0; i<5 && j<29; j++) runs only for first 5 rows.
- - It prints a pyramid that works as a roof for the hut. 
- - For each j (column), it reads the if statement and print spaces (outside pyramid). Else, print a star ( ∗ ) (inside the pyramid).
- The second inner loop,for(k=0; i>4 && k<25; k++) runs only when i is greater than 4 (rows 6 to 16).For each k column:
- - First if : It Prints stars at the borders (k==4 or k==24).
- - Next two else if : Prints 2 hollow squares using " * " at given coordinantes that work as window.
- - Next two else if : Prints the required gate using " * ".
- - Prints stars for the base (i==15).
- - Else, prints spaces.
- printf("\n") inside the main loop ensures we go the next line after running loop once and makes i work as a row.
- Return 0 indicates successful execution and ends the program.
