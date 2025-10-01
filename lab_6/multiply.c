#include <stdio.h>
int main() 
{
    int m,n,p,q,i,j,k;
    printf("Enter size of A (m, n):\n");
    scanf("%d %d",&m,&n);
    printf("Enter size of B (p, q):\n");
    scanf("%d %d",&p,&q);

    if(n != p) 
    {
        printf("Matrix multiplication not possible\n");
        return 1;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("Enter elements to A:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter elemnts to B:\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    // Multiply
    for(i=0; i<m; i++) 
    {
        for(j=0; j<q; j++) 
        {
            C[i][j] = 0;
            for(k=0;k<n;k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }


    printf("Result:\n");
    for(i=0; i<m; i++) 
    {
        for(j=0; j<q; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
