#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array \n");
    scanf("%d",&n);
    int num[n];

    printf("Enter elements(num) to array \n");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &num[i]);
    }

    int largest = num[0], smallest = num[0];
    for(int i=0; i<n; i++)
    {
        if(num[i]>largest)
        largest = num[i];
    
        if(num[i]<smallest)
        smallest = num[i];
    }

    int s_largest = -1000000, s_smallest = 1000000 ;
    for(int i=0; i<n; i++)
    {
        if(num[i] > s_largest && num[i] < largest)
        s_largest = num[i];
    
        if(num[i] < s_smallest && num[i] > smallest )
        s_smallest = num[i];
    }
    printf("Second largest = %d \n",s_largest);
    printf("Second smallest = %d \n",s_smallest);

    return 0;
}