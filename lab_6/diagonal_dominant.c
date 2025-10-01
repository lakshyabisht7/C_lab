#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n, f=1;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n][n], i, j;

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0; i<n; i++)
    {
        int sum=0;
        for(j=0; j<n; j++)
        {
            if(i != j)
            sum += abs(a[i][j]);
        }
        if(sum > abs(a[i][i]))
        f = 0;
    } 
    
    if(f==1)
    printf("Diagonally dominant");
    else
    printf("Not Diagonally dominant");

    return 0;
}
