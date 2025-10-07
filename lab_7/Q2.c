/*Q2. Write a function int isPrime(int n) that returns 1 if n is prime, else 0. Use this function to:
 (a) Display all prime numbers between two user–given limits.
 (b) Find the nth prime number.
 */
#include <stdio.h>

int isPrime(int n) 
{
    if (n <= 1) 
        return 0;  

    for (int i = 2; i <= n/2; i++) 
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() 
{
    int choice;
    printf("Choose an option:\n");
    printf("1. Display primes between two limits\n");
    printf("2. Find nth prime number\n");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        int low, high;
        printf("Enter two numbers (lower and upper limit):\n");
        scanf("%d %d", &low, &high);

        printf("Prime numbers between %d and %d are:\n", low, high);
        for (int i = low; i <= high; i++) 
        {
            if (isPrime(i))
                printf("%d ", i);
        }
        printf("\n");
    }
    else if (choice == 2) 
    {
        int n, count=0, num=2;
        printf("Enter n: ");
        scanf("%d", &n);

        while(count < n) 
        {
            if (isPrime(num)) 
            {
                count++;
                if (count == n) 
                {
                    printf("The %dth prime number is %d\n", n, num);
                    break;
                }
            }
            num++;
        }
    } 
    else 
    {
        printf("Invalid choice!\n");
    }

    return 0;
}
