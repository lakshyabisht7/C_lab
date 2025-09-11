#include <stdio.h>
int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int num[n];   
    printf("Enter %d elements:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    
    //Printing original array
    for (int i = 0; i < n; i++) 
    {
        printf("%d ",num[i]);
    }
    
    for (int i = 0; i < n/2; i++) 
    {
        int x = num[i];
        int y = num[n-i-1];
        if (x != y)
        {
            printf(": Not Palindrome");
            return 0;
            break;
        }
    }
    printf(": Palindrome\n");
    
    return 0;
}
