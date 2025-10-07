/*Q5. Write functions to
 • Find the maximum and minimum in an integer array.
 • Compute the average of array elements.
 • Search for an element using linear search.
 Demonstrate their use in a single program.
 */
 #include <stdio.h>

int Max(int arr[], int n) 
{
    int max = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int Min(int arr[], int n) 
{
    int min = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

float Average(int arr[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    return (float)sum / n;
}

int linearSearch(int arr[], int n, int key) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key)
            return i; 
    }
    return -1; 
}

int main() 
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Maximum element = %d\n", Max(arr, n));
    printf("Minimum element = %d\n", Min(arr, n));

    printf("Average of elements = %f\n", Average(arr, n));

    // Linear search
    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);
    int index = linearSearch(arr, n, key);

    if (index != -1)
        printf("%d found at index %d\n", key, index);
    else
        printf("%d not found in the array\n", key);

    return 0;
}
