/*
    Description: Recursion method is used to display the fibonacci series.
*/
#include <stdio.h>

int fib(int);

int main()
{
    int num;
    printf("Enter 'N' to display Fibonacci series upto N(th) term: ");
    scanf("%d", &num);
    printf("Fibonacci series upto %dth terms are:\n", num);
    for (int i = 0; i < num; i++)
        printf("\t%d", fib(i));
    printf("\n");
    return 0;
}

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (fib(n - 1) + fib(n - 2));
}