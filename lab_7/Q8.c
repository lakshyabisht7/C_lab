/*Q8. Write a menu-driven program with the following user-defined functions:
 • int factorial(int n)
 • int isPrime(int n)
 • int reverseNumber(int n)
 Allow the user to choose an operation repeatedly until they select Exit#include <stdio.h>
*/

int factorial(int n) 
{
    if (n < 0)
        return -1; 
    int fact = 1;
    for (int i = 1; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}

int isPrime(int n) 
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0)
            return 0;
    }
    return 1; 
}

int reverseNumber(int n) 
{
    int reversed = 0;
    while (n != 0) 
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main() 
{
    int choice, num;

    do {
        printf("\nMenu:\n");
        printf("1. Factorial\n");
        printf("2. Check Prime\n");
        printf("3. Reverse Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                int fact = factorial(num);
                if (fact == -1)
                    printf("Invalid input! Factorial not defined for negative numbers.\n");
                else
                    printf("Factorial of %d is %d\n", num, fact);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num))
                    printf("%d is a prime number.\n", num);
                else
                    printf("%d is not a prime number.\n", num);
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Reversed number: %d\n", reverseNumber(num));
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } 
    while (choice != 4);

    return 0;
}
