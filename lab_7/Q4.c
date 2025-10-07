/* Q4. String Operations using Functions Without using <string.h>, write functions to:
 • Find the length of a string.
 • Reverse a string.
 • Compare two strings for equality.
 Call these functions from main().
 */
#include <stdio.h>

int stringLength(char str[]) 
{
    int len = 0;
    while (str[len] != '\0') 
    {
        len++;
    }
    return len;
}


void reverseString(char str[]) 
{
    int len = stringLength(str);
    for (int i = 0; i < len / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int compareStrings(char str1[], char str2[]) 
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') 
    {
        if (str1[i] != str2[i]) 
        {
            return 0; 
        }
        i++;
    }
    // If both strings end at the same time, they are equal
    if (str1[i] == '\0' && str2[i] == '\0') 
    {
        return 1;
    }
    return 0; 
}

int main() 
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Length of first string: %d\n", stringLength(str1));
    printf("Length of second string: %d\n", stringLength(str2));

    reverseString(str1);
    printf("Reversed first string: %s\n", str1);

    if (compareStrings(str1, str2)) 
    {
        printf("Strings are equal.\n");
    } 
    else 
    {
        printf("Strings are not equal.\n");
    }

    return 0;
}