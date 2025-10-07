/*Q7. Create a function int isPalindrome(int n) that returns 1 if an integer is a palindrome, else 0. 
Test the function on multiple user–entered numbers.
*/
#include <stdio.h>

int isPalindrome(int n) 
{
    int original = n;
    int reversed = 0;

    while (n > 0) 
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed)
        return 1;  
    else
        return 0;  
}

int main() 
{
    int count, num;
    printf("How many numbers do you want to check?");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (isPalindrome(num))
            printf("%d is a palindrome.\n", num);
        else
            printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
