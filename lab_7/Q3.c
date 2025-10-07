/*Q3. Create a function long factorial(int n) to compute n!. Use it to calculate binomial coefficient:
 
 C(n,r) =n! /(r!(n − r)!) 
 Take n and r from the user.
 */
#include <stdio.h>

long factorial(int n) 
{
    long fact = 1;
    for (int i = 1; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}

int main() 
{
    int n, r;
    printf("Enter n and r:\n");
    scanf("%d %d", &n, &r);

    if (r > n || n < 0 || r < 0) 
    {
        printf("Invalid input (r>= 0; n>=0; n >=r)");
        return 1;
    }

    long nFact = factorial(n);
    long rFact = factorial(r);
    long n_rFact = factorial(n - r);

    long C = nFact / (rFact * n_rFact);

    printf("C(%d, %d) = %ld\n", n, r, C);

    return 0;
}