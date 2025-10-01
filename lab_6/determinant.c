#include <stdio.h>
int main() 
{
    int n;
    printf("Enter size (n<=3): ");
    scanf("%d", &n);
    if(n>3)
    {
        printf("enter n<=3");
        return 1;
    }
    int a[3][3], i, j;

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        int det = 0;
        if(n==1)
        det = a[0][0];
    }

    else if(n==2)
    det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    else if(n==3)
    det = (a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])) - (a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])) + (a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]));

    printf("Determinant = %d", det);
    return 0;
}
