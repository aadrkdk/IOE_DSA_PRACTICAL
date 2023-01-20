/*
    Description: Recursion is used to solve Towers of Hanoi problem.
*/
#include <stdio.h>
#include <stdlib.h>

void towers(int, char, char, char);

int main()
{
    int n;

    printf("\nEnter number of disks: ");
    scanf("%d", &n);
    towers(n, 'A', 'C', 'B'); // Moves n disks from A to C, using B as auxiliary
    printf("\n");
    return 0;
}

void towers(int n, char frompeg, char topeg, char auxpeg)
{
    /* If only one disk, make the move and return */
    if (n == 1)
    {
        printf("\n\tMove disk 1 from peg-%c to peg-%c", frompeg, topeg);
        return;
    }
    /* Move top n-1 disks from A to B, using C as auxiliary */
    towers(n - 1, frompeg, auxpeg, topeg);
    /* Move remaining disks from A to C */
    printf("\n\tMove disk %d from peg-%c to peg-%c", n, frompeg, topeg);
    /* Move n-1 disk from B to C using A as auxiliary */
    towers(n - 1, auxpeg, topeg, frompeg);
}