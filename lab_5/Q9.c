#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter size of arrays \n");
    scanf("%d",&n);
    int num1[n], num2[n], num3[n];

    printf("Enter elements of 1st array:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num1[i]);
    }

    printf("Enter elements of 2nd array:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num2[i]);
    }

    printf("Original Array : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",num1[i]);
    }
    printf("\nOriginal Array : ");

    for(int i=0; i<n; i++)
    {
        printf("%d ",num2[i]);
    }
    printf("\nCommon elements :");

    int k=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(num1[i]==num2[j])
            {
                num3[k++] = num1[i];
            }
        }
    }

    for(int i=0; i<k; i++)
    {
        printf("%d ",num3[i]);
    }

    return 0;
}