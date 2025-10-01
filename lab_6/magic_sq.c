#include <stdio.h>
int main() 
{
    int n, i, j, sum, diag1 = 0, diag2 = 0, magic = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Sum of first row
    int target = 0;
    for(j = 0; j < n; j++)
    target += a[0][j];

    for(i = 1; i < n; i++) 
    {
        sum = 0;
        for(j = 0; j < n; j++)
            sum += a[i][j];
        if(sum != target)
        {
            magic = 0;
            break;
        }
    }

    for(j = 0; j < n; j++) 
    {
        sum = 0;
        for(i = 0; i < n; i++)
            sum += a[i][j];
        if(sum != target)
        {
            magic = 0;
            break;
        } 
    }

    for(i = 0; i < n; i++) 
    {
        diag1 += a[i][i];
        diag2 += a[i][n-i-1];
    }
    if(diag1 != target || diag2 != target) 
    magic = 0;

    if(magic == 1) 
    printf("Magic Square\n");
    else 
    printf("Not a Magic Square\n");

    return 0;
}
