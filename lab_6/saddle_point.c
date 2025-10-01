#include <stdio.h>
int main() 
{
    int n, i, j, k, f=0;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n][n];

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

    for(i=0;i<n;i++) 
    {
        int min=a[i][0], col=0;
        for(j=1;j<n;j++) 
        {
            if(a[i][j] < min) 
            {
                min=a[i][j];
                col=j;
            }
        }

        int max=1;
        for(k=0;k<n;k++) 
        {
            if(a[k][col] > min) 
            {
                max=0;
                break;
            }
        }

        if(max) 
        {
            printf("Saddle Point = %d at (%d,%d)\n",min,i+1,col+1);
            f=1;
        }
    }

    if(f=0) 
    printf("No Saddle Point\n");

    return 0;
}
