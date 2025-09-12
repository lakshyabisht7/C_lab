#include <stdio.h>
int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int num[n];   
    printf("Enter %d elements:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    
    //Printing original array
    for (int i = 0; i < n; i++) 
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    
    for (int i = 0; i < n; i++) 
    {
        for(int j = i+1; j < n; j++)
        {
            if(num[i]==num[j])
            {
                for(int k = j; k < n-1; k++)
                {
                    num[k] = num[k+1];
                }
                n--;
                j--;
            }
        }
    }
    
    for(int i=0; i < n; i++)
    {
        printf("%d ",num[i]);
    }
    
    return 0;
}
