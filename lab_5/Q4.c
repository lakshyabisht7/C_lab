#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array \n");
    scanf("%d",&n);
    int num[n], new[2*n];

    printf("Enter elements(num) to array \n");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &num[i]);
    }
    
    for(int i=0 ; i<(2*n) ; i++)
    {
        new[i] = num[i/2];
    }

    for(int i=0 ; i<(2*n) ; i++)
    {
        printf("%d ",new[i]);
    }

    return 0;
}