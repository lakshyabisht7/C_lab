/* Q6. Define a recursive function int fib(int n) that returns the nth Fibonacci number. 
Use it to print the first k terms of the series.
*/
#include <stdio.h>

int fib(int n) 
{
    if (n == 0)
        return 0;  
    else if (n == 1)
        return 1;  
    else
        return fib(n - 1) + fib(n - 2);
}

int main() 
{
    int k;
    printf("Enter the number of Fibonacci terms to print: ");
    scanf("%d", &k);

    printf("First %d Fibonacci numbers:\n", k);
    for (int i = 0; i < k; i++) 
    {
        printf("%d ", fib(i));
    }
    printf("\n");

    return 0;
}

