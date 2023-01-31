/*
    Description: Recursion method is used to find the factorial of a number.
*/
#include <stdio.h>

int fact(int);

int main()
{
    int num, factorial;
    printf("Enter a number to find factorial: ");
    scanf("%d", &num);
    factorial = fact(num);
    printf("Factorial = %d\n", factorial);
    return 0;
}

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * fact(n - 1));
}